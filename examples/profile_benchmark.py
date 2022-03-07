from threading import Thread
import profile
# from proton import Timeout
import sys
import string
import os
import pandas as pd

import pdb
import numpy as np
import matplotlib.pyplot as plt
import collections
import seaborn as sns

import pandas as pd
import tempfile
import signal

column_names = [
    "counter_value",
    "counter_unit",
    "event_name",
    "counter_variance", # This is only when -r is passed to perf stat
    "counter_runtime",
    "counter_runtime_perc",
    "metric_value",
    "metric_unit",
]

event_list = [
    [
        'duration_time',
        'task-clock',        
        'cpu-cycles',
        'instructions',
        'bpf-output',
    ],
    [
        'alignment-faults',
        'context-switches',
        'cpu-clock',
        'cpu-migrations',
        'emulation-faults',
    ],
    [        
        'major-faults',
        'minor-faults',
        'page-faults',
        'cache-misses',
        'cache-references',        
    ],
    [
        'L1-dcache-load-misses',
        'L1-dcache-loads',
        'L1-dcache-prefetches',
        'L1-icache-load-misses',
        'L1-icache-loads',
    ],
    [
        'branch-instructions',
        'branch-misses',
        'branch-load-misses',
        'branch-loads',
    ],
    [
        'dTLB-load-misses',
        'dTLB-loads',
        'iTLB-load-misses',
        'iTLB-loads',
    ]
]

import subprocess
from signal import Signals
from typing import List

def run_command(cmd: List[str], timeout: int):
    # pdb.set_trace()
    with subprocess.Popen(
        cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True
    ) as process:
        stdout, stderr = process.communicate(timeout=timeout)
        if process.returncode:
            returncode = process.returncode
            try:
                # Try and decode the name of a signal. Signal returncodes
                # are negative.
                returncode = f"{returncode} ({Signals(abs(returncode)).name})"
                
            except ValueError:
                pass
            # pdb.set_trace()
            raise OSError(
                f"Compilation job failed with returncode {returncode}\n"
                f"Command: {' '.join(cmd)}\n"
                f"Stderr: {stderr.strip()}"
            )
    return stdout


def run_perf(csv_path_tmp, exe_args_list, event_group):
    event_group_cmd = '-e '+ ','.join(event_group)
    
    cmd = 'perf stat -o %s "-x" "," -r 5 %s %s'%(csv_path_tmp, event_group_cmd, " ".join(exe_args_list))    
    print(cmd)
    os.system(cmd)


def concatanate_csv(tempdir, final_csv_path):
    all_filenames = os.listdir(tempdir)
    if len(all_filenames):        
        all_file_paths = [os.path.join(tempdir, f) for f in all_filenames ]
        combined_csv = pd.concat([pd.read_csv(f_path) for f_path in all_file_paths ])
        combined_csv.to_csv(final_csv_path)
    else:
        print("No profiles to concatanate")

def profile_benchmark(final_csv_path, exe_args_list):
    exe_path = exe_args_list[0]

    with tempfile.TemporaryDirectory() as tempdir:
        raw_exe_name = exe_path.split('/')[-1].rstrip('.exe')
        
        for i, event_group in enumerate(event_list):
            csv_path_tmp = tempdir + '/' + raw_exe_name + '.profile_%d.csv'%i        
            run_perf(csv_path_tmp, exe_args_list, event_group)

        concatanate_csv(tempdir, final_csv_path)


def main():
    
    print(sys.argv)
    if len(sys.argv) != 3:
        print('Format: profile_benchmark.py csv_path "exe_path+args" ')
        return 

    csv_path = sys.argv[1]
    exe_args_str = sys.argv[2]
    exe_args_list = exe_args_str.split(" ")
    
    profile_benchmark(csv_path, exe_args_list)

if __name__ == '__main__':
    main()