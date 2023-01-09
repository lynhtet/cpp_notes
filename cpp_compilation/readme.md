# The steps of CPP compilation
## Preprocessing
- g++ -E main.cpp -o main.o
## Compilation
- g++ -S main.i -o main.s
## Assembling
- g++ -c main.s -o main.o
## Linking
- g++ main.o -o main.out