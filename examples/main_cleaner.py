import sys
import string
import os

import re

import pdb


regex_main_start = re.compile('int *main *\(')
regex_main_return = re.compile('return *[0-9]*;')

save_list = ["func_[0-9]*\(",
             "crc32_gentab",
             ]

regex_func_call = re.compile('|'.join(save_list))




def clean_main_func(file_name):
    new_file_name = file_name#.split('.c')[0] + '_cleaned' + '.c'

    # os.system("cp " + file_name + ' ' + new_file_name)
    cur_id = 0

    with open(file_name, 'r') as f_orig:        
        lines = f_orig.readlines()

        # Find where main begins
        while not regex_main_start.search(lines[cur_id]):
            cur_id += 1

        cur_id += 1
        if lines[cur_id] == '{\n':
            cur_id += 1

        # Delete all lines that are not call to the func_num

        while not regex_main_return.search(lines[cur_id]):
            if regex_func_call.search(lines[cur_id]):
                cur_id += 1
            else:
                lines.pop(cur_id)

            
    with open(new_file_name, 'w') as f_new:
        f_new.writelines(lines)



def is_file_correct(file_name):

    assert file_name.endswith('.c')
    return os.path.exists(file_name)




def main():
    
    print(sys.argv)
    if len(sys.argv) < 2:
        print('Format: main_cleaner.py file1 [ file2 ... ]')
        return 

    file_names = sys.argv[1:]

    assert all([ is_file_correct(f) for f in file_names ])


    for file_name in file_names:
        clean_main_func(file_name)

if __name__ == '__main__':
    main()