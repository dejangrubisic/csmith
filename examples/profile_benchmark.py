import profile
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
        # 'idle-cycles-backend',
        # 'idle-cycles-frontend',
    ],
    [
        'alignment-faults',
        'bpf-output',
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


def run_perf(csv_path_tmp, exe_path, event_group):
    event_group_cmd = '-e '+ ','.join(event_group)
    # TODO: Add timeout
    
    cmd = 'perf stat -o %s "-x" "," -r 5 %s %s'%(csv_path_tmp, event_group_cmd, exe_path)    
    print(cmd)
    os.system(cmd)


def concatanate_csv(tempdir, final_csv_path):

    all_filenames = os.listdir(tempdir)
    all_file_paths = [os.path.join(tempdir, f) for f in all_filenames ]
    combined_csv = pd.concat([pd.read_csv(f_path) for f_path in all_file_paths ])
    combined_csv.to_csv(final_csv_path)


def profile_benchmark(final_csv_path, exe_path):

    with tempfile.TemporaryDirectory() as tempdir:
        raw_exe_name = exe_path.split('/')[-1].rstrip('.exe')
        
        for i, event_group in enumerate(event_list):
            csv_path_tmp = tempdir + '/' + raw_exe_name + '.profile_%d.csv'%i        
            run_perf(csv_path_tmp, exe_path, event_group)

        concatanate_csv(tempdir, final_csv_path)


def main():
    
    print(sys.argv)
    if len(sys.argv) != 3:
        print('Format: profile_benchmark.py csv_path exe_path')
        return 

    csv_path = sys.argv[1]
    exe_path = sys.argv[2]

    profile_benchmark(csv_path, exe_path)

if __name__ == '__main__':
    main()