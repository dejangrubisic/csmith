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
    "metric_unit_2",
    "metric_unit_3",
    "metric_unit_4",
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

    df = df.astype({"counter_value": float,                 
                    "counter_variance": float, 
                    "counter_runtime": float,
                    "counter_runtime_perc": float,
                    "metric_value": float,
                    })
    
    new_profile_df = df[["event_name", "counter_value"]].sort_values('event_name', ignore_index=True)
    return new_profile_df



def concatanate_profiles(file_paths) -> pd.DataFrame:
    all_profiles_df = pd.DataFrame()

    for i, file_path in enumerate(file_paths):
        print(file_path)
        benchmark_name = file_path.split('/')[-1].rstrip(".profile.csv")

        new_profile_df = perf_get_counter_values(file_path)
        if new_profile_df.empty:
            continue

        # cycles = new_profile_df[new_profile_df['event_name'].str.contains('cpu-cycles')]['counter_value'].values[0]
        # new_profile_df['counter_value'] = new_profile_df['counter_value'] / cycles
        new_profile_df = new_profile_df.rename(columns={"counter_value": benchmark_name})

        if i == 0:
            all_profiles_df = new_profile_df
        else:
            if np.all(new_profile_df['event_name'] == all_profiles_df['event_name']):
                all_profiles_df = pd.concat([all_profiles_df, new_profile_df[benchmark_name]], axis=1)
        
    return all_profiles_df


def plot_histogram(all_profiles_df, benchmark_name, vis_dir):


    df_mean = all_profiles_df.iloc[:, 1:].mean(axis=1)
    plt.title(benchmark_name + ' benchmark')

    fig, axs = plt.subplots(nrows=1, ncols=all_profiles_df.shape[0], figsize=(4*all_profiles_df.shape[0], 4))
    i = 0
    for index, row in all_profiles_df.iterrows():
        axs[i].bar(sorted(all_profiles_df.columns.tolist()), row,  color='g')
        axs[i].title.set_text(index)
        plt.tight_layout()
    
        i += 1

    plt.savefig(vis_dir + '/local/' + benchmark_name +'.histogram.png')


def set_axis_style(ax, labels):
    ax.xaxis.set_tick_params(direction='out')
    ax.xaxis.set_ticks_position('bottom')
    ax.set_xticks(np.arange(1, len(labels) + 1), labels=labels)
    ax.set_xlim(0.25, len(labels) + 0.75)
    ax.set_xlabel('Benchmark examples')


def plot_violin(all_profiles_df, metric_name, benchmark_names, vis_dir):

    fig, ax = plt.subplots(nrows=1, ncols=1)

    set_axis_style(ax, benchmark_names)
    ax.set_title(metric_name)                            

    ax.violinplot(all_profiles_df,
                  showmeans=False,
                  showmedians=True)

    plt.tight_layout()
    plt.savefig(vis_dir + '/global/' + metric_name +'.violin.png')


def visualize_benchmark_profiles(all_profiles_df, benchmark_name, vis_dir):

    all_profiles_df.index = all_profiles_df['event_name']
    all_profiles_df = all_profiles_df.drop(["event_name"], axis=1)
    plot_histogram(all_profiles_df, benchmark_name, vis_dir)



def visualize_all_profiles(all_profiles_df, benchmark_names, vis_dir):
    metric_names = all_profiles_df[0]['event_name']
    for i, metric_name in enumerate(metric_names):
        metric_df = []

        for df in all_profiles_df:
            metric_df.append(df.iloc[i,1:].tolist())

        plot_violin(metric_df, metric_name, benchmark_names, vis_dir)


def is_file_correct(file_path):

    assert file_path.endswith('.profile.csv')
    return os.path.exists(file_path)


def get_profile_files(profile_dir):
    all_files = os.listdir(profile_dir)
    if len(all_files):
        return [ os.path.join(profile_dir, filename) for filename in all_files if filename.endswith('.profile.csv') ]
    else:
        print('No files to visualize')
        return None

def main():
    
    print(sys.argv)
    if len(sys.argv) != 3:
        print('Format: visualize_profile.py profile_dir visualization_dir')
        return 

    vis_benchmarks_local = False
    profile_dir = sys.argv[1]
    vis_dir =  sys.argv[2]

    all_profiles_df = []   
    benchmark_names = []

    for benchmark_name in os.listdir(profile_dir):
        benchmark_path = os.path.join(profile_dir, benchmark_name)

        file_paths = get_profile_files(benchmark_path)
        if file_paths == None:
            continue
        benchmark_profiles_df = concatanate_profiles(file_paths)
        
        if vis_benchmarks_local:
            if not benchmark_profiles_df.empty:
                visualize_benchmark_profiles(benchmark_profiles_df, benchmark_name, vis_dir)
            else:
                print('Nothing to visualize')

        benchmark_names.append(benchmark_name)
        all_profiles_df.append(benchmark_profiles_df)
        
    
    visualize_all_profiles(all_profiles_df, benchmark_names, vis_dir)


if __name__ == '__main__':
    main()