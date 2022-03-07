import sys
import os
from glob import glob

def rename_files(cur_dir, old_suffix, new_suffix):
    all_files = [ y for x in os.walk(cur_dir) for y in glob(os.path.join(x[0], '*.'+old_suffix)) ]

    if len(all_files) == 0:
        print('No files with extension ', old_suffix)
        exit()

    for file in all_files:
        new_name = file.strip(old_suffix) + new_suffix
        os.rename(file, new_name)




def main():
    
    print(sys.argv)
    if len(sys.argv) != 4:
        print('Format: change_extension.py path_to_dir old_suffix new_suffix')
        return 

    cur_dir = sys.argv[1]
    old_suffix = sys.argv[2]
    new_suffix = sys.argv[3]
    
    rename_files(cur_dir, old_suffix, new_suffix)


if __name__ == '__main__':
    main()