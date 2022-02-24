from builtins import all
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

def perf_get_counter_values(csv_name: str) -> pd.DataFrame:
    global column_names
    new_profile_df = pd.DataFrame()

    df = pd.read_csv(csv_name, names=column_names)
    if len(df.columns) < len(column_names) - 1:
        return new_profile_df

    df = df[df["counter_value"] != "<not supported>"]
    df = df[df["counter_value"] != "<not counted>"]
    df = df[df["event_name"].notnull()]
    
    df["counter_variance"] = df["counter_variance"].str.rstrip('%')

    df = df.astype({"counter_value": np.float,                 
                    "counter_variance": np.float, 
                    "counter_runtime": np.float,
                    "counter_runtime_perc": np.float,
                    "metric_value": np.float,
                    })
    
    new_profile_df = df[["event_name", "counter_value"]]
    return new_profile_df



def concatanate_profiles(file_names) -> pd.DataFrame:
    all_profiles_df = pd.DataFrame()

    for i, file_name in enumerate(file_names):
        new_profile_df = perf_get_counter_values(file_name)
        if new_profile_df.empty:
            continue

        cycles = new_profile_df[new_profile_df['event_name'] == 'cpu-cycles']['counter_value'].values[0]
        new_profile_df['counter_value'] = new_profile_df['counter_value'] / cycles
        if i == 0:
            all_profiles_df = new_profile_df
        else:
            if np.all(new_profile_df['event_name'] == new_profile_df['event_name']):                
                all_profiles_df = pd.concat([all_profiles_df, new_profile_df['counter_value']], axis=1)
        

    return all_profiles_df



def visualize_profiles(all_profiles_df, profile_dir, vis_dir):
    print(profile_dir)
    bench_name = os.path.basename(profile_dir)
    key_list = []
    mean_list = []

    df_mean = all_profiles_df.iloc[:, 1:].mean(axis=1)

    plt.bar(all_profiles_df["event_name"], df_mean,  color='g')
    plt.xticks(rotation = 45, fontsize='xx-small')
    plt.tight_layout()
    # plt.show()
    plt.savefig(vis_dir + '/' + bench_name +'.histogram.png')

    # pdb.set_trace()
    fig, axs = plt.subplots(nrows=1, ncols=all_profiles_df.shape[0], figsize=(1.2*all_profiles_df.shape[0], 4))
    
    fig.suptitle(bench_name + ' benchmark')

    for index, row in all_profiles_df.iterrows():
        # pdb.set_trace()
        axs[index-1].violinplot(    dataset=list(row[1:].values),
                                    positions=[1],
                                    showmeans=False,
                                    showmedians=True,
                                    widths=2)
        axs[index-1].set_xticks(range(1, 2), labels = [ row["event_name"] ], rotation = 45, fontsize='xx-small')
        plt.tight_layout()

    # plt.show()
    plt.savefig(vis_dir + '/' + bench_name +'.violin.png')


def is_file_correct(file_name):

    assert file_name.endswith('.profile.csv')
    return os.path.exists(file_name)


def get_profile_files(profile_dir):
    # pdb.set_trace()
    all_files = os.listdir(profile_dir)
    if len(all_files):
        return [ os.path.join(profile_dir, filename) for filename in all_files if filename.endswith('.profile.csv') ]
    else:
        print('No files to visualize')
        exit()

def main():
    
    print(sys.argv)
    if len(sys.argv) != 3:
        print('Format: visualize_profile.py profile_dir visualization_dir')
        return 

    profile_dir = sys.argv[1]
    vis_dir =  sys.argv[2]
    file_names = get_profile_files(profile_dir)
    all_profiles_df = concatanate_profiles(file_names)
    
    if not all_profiles_df.empty:
        visualize_profiles(all_profiles_df, profile_dir, vis_dir)
    else:
        print('Nothing to visualize')

if __name__ == '__main__':
    main()