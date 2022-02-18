import sys
import string
import os

import re

import pdb


regex_loop = re.compile('for.(.*;.*;.*)')

iter_prefix = 'UNIQUE_ITER_'
global iter_index
iter_index = 0

def generate_loop(factor):
    global iter_index
    iterator = iter_prefix + str(iter_index)
    iter_index += 1

    return "for(int %s = 0; %s < %s; %s++)\n"%(iterator, iterator, factor, iterator)


def extend_loops(file_name, factor=2):
    print("extend_loops")
    new_file_name = file_name.split('.c')[0] + '_extended' + '.c'

    # os.system("cp " + file_name + ' ' + new_file_name)
    cur_id = 0

    with open(file_name, 'r') as f_orig:        
        lines = f_orig.readlines()
        for _ in range(len(lines)):

            line = lines[cur_id]
            if regex_loop.search(line):
                lines.insert(cur_id, generate_loop(factor))
                cur_id += 1
            cur_id += 1
            
    with open(new_file_name, 'w') as f_new:
        f_new.writelines(lines)



def is_file_correct(file_name):

    assert file_name.endswith('.c')
    return os.path.exists(file_name)




def main():
    
    print(sys.argv)
    if len(sys.argv) < 3:
        print('Format: python loop_factor file1 [ file2 ... ]')
        return 
    factor = sys.argv[1]
    file_names = sys.argv[2:]

    assert all([ is_file_correct(f) for f in file_names ])


    for file_name in file_names:
        extend_loops(file_name, factor)

if __name__ == '__main__':
    main()