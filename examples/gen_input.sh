FILE_IN=benchmarks/in.txt

if test -f $FILE_IN; then
    python gen_input.py $FILE_IN 100 100 
fi