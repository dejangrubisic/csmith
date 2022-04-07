from cgi import test
import sys
import os 
import random
import shutil

def separate_test_data(train_dir, test_dir, test_perc):
    
    onlyfiles = [f for f in os.listdir(train_dir) if os.path.isfile(os.path.join(train_dir, f))]

    test_num = int(len(onlyfiles) * test_perc / 100)
    test_files = random.sample(onlyfiles, test_num)

    for file in test_files:
        print(train_dir + '/' + file)
        shutil.move(train_dir + '/' + file, test_dir + '/' + file)

def main():
    
    print(sys.argv)
    if len(sys.argv) != 4:
        print('Format: split_data.py path_to_data path_to_test percentage')
        return 

    train_dir = sys.argv[1]
    test_dir = sys.argv[2]
    test_perc = int(sys.argv[3])
    
    if os.path.exists(test_dir):
        if len(os.listdir(test_dir)) != 0:
            print("Error: Remove test_dir first")
            return
    else:
        os.makedirs(test_dir)

    separate_test_data(train_dir, test_dir, test_perc)


if __name__ == '__main__':
    main()