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

column_names = [
    "counter_value",
    "counter_unit",
    "event_name",
    "counter_variance", # This is only when -r is passed to perf stat
    "counter_runtime",
    "counter_runtime_perc",
    "metric_value",
    "metric_unit",
    "metric_unit_1",
]

def perf_parse_to_dict(csv_name: str) -> dict:
    global column_names
    profile_dict = {}
    # if 'r' there will be column for std +- var
    
    df = pd.read_csv(csv_name, names=column_names)
    assert len(column_names) == df.shape[1]
    df = df[df["counter_value"] != "<not supported>"]
    df = df[df["counter_value"] != "<not counted>"]
    df = df[df["event_name"].notnull()]
    
    # pdb.set_trace()
    df["counter_variance"] = df["counter_variance"].str.rstrip('%')
    df["metric_label"] = df["event_name"] #+ ' [' + df["metric_unit"] + ']'

    # profile_dict.update(dict(zip(df["event_name"], df["counter_value"]))) 
    # profile_dict.update(dict(zip(df["event_name"]+"_var", df["counter_variance"])))

    df = df.astype({"counter_value": np.float,                 
                    "counter_variance": np.float, 
                    "counter_runtime": np.float,
                    "counter_runtime_perc": np.float,
                    "metric_value": np.float,
                    })


    # pdb.set_trace()
    profile_dict.update(dict(zip(df["metric_label"], df["counter_value"]))) 
    # profile_dict.update(dict(zip(df["metric_unit"]+"_var", df["counter_variance"])))


    return profile_dict



def concatanate_profiles(file_names) -> dict:
    profile_dict = {}

    for file_name in file_names:
        new_dict = perf_parse_to_dict(file_name)

        for key, value in new_dict.items():
            if key in profile_dict:
                profile_dict[key].append(value)
            else:
                profile_dict[key] = [ value ]

    return profile_dict


def visualize_profiles(profiles_dict, profile_dir, vis_dir):
    print(profile_dir)
    bench_name = os.path.basename(profile_dir)
    mean_dict = {}

    for key, val_list in profiles_dict.items():
        mean_dict[key] = np.mean(list(val_list))


    print("mean_dict")
    print(mean_dict)
    # pdb.set_trace()
    mean_dict = collections.OrderedDict(sorted(mean_dict.items()))

    plt.bar(mean_dict.keys(), mean_dict.values(),  color='g')
    plt.xticks(rotation = 45, fontsize='xx-small')
    plt.tight_layout()
    # plt.show()
    plt.savefig(vis_dir + '/' + bench_name +'.histogram.png')

    # pdb.set_trace()
    fig, axs = plt.subplots(nrows=1, ncols=len(profiles_dict), figsize=(1.2*len(profiles_dict), 4))
    
    fig.suptitle(bench_name + ' benchmark')
    i = 0
    for key, value in profiles_dict.items():
        axs[i].violinplot(  value,
                            showmeans=False,
                            showmedians=True,
                            widths=2)
        # axs[i].set_title(key)
        axs[i].set_xticks(range(1, 2), labels = [key], rotation = 45, fontsize='xx-small')
        i += 1
        plt.tight_layout()

    # plt.show()
    plt.savefig(vis_dir + '/' + bench_name +'.violin.png')


def is_file_correct(file_name):

    assert file_name.endswith('.profile.csv')
    return os.path.exists(file_name)


def get_profile_files(profile_dir):
    # pdb.set_trace()
    all_files = os.listdir(profile_dir)
    return [ os.path.join(profile_dir, filename) for filename in all_files if filename.endswith('.profile.csv') ]

def main():
    
    print(sys.argv)
    if len(sys.argv) != 3:
        print('Format: visualize_profile.py profile_dir visualization_dir')
        return 

    profile_dir = sys.argv[1]
    vis_dir =  sys.argv[2]
    file_names = get_profile_files(profile_dir)
    profiles_dict = concatanate_profiles(file_names)
    
    visualize_profiles(profiles_dict, profile_dir, vis_dir)

if __name__ == '__main__':
    main()