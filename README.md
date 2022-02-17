gcc -shared csrc.c -o libcsrc.so -ggdb
g++ cppsrc.cpp -L./ -lcsrc -ggdb
export LD_LIBRARY_PATH=./
./a.out