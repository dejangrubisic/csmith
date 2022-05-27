FILE_IN=benchmarks/in_1.txt

if test -f $FILE_IN; then
    python gen_input.py $FILE_IN 100 100 
fi