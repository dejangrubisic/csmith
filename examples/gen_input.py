import random
import sys


def main():
    
    print(sys.argv)
    if len(sys.argv) < 2 :
        print('Format: gen_input.py file_path [ num ] ')
        return 

    args_len = int(1e4)
    file_path = sys.argv[1]
    input_args = sys.argv[2:]
    

    args_list = []
    
    for _ in range(args_len - len(input_args)):
        arg = random.randrange(65, 90)
        input_args.append(str(arg))

    for x in input_args:
        args_list.append(x)
        args_list.append('\n')
        

    with open(file_path, 'w') as f:
        f.write(''.join(args_list))




if __name__ == '__main__':
    main()