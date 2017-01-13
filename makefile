all: deciTree

dotree.o: dotree.c 
		gcc -o dotree.o -c dotree.c -W -Wall -ansi -pedantic

docalc.o: docalc.c 
		gcc -o dcalc.o -c docalc.c -W -Wall 

doinfo.o: doinfo.c 
		gcc -o doinfo.o -c doinfo.c -W -Wall 

main.o: main.c decisionTree.h
		gcc -o main.o -c main.c -W -Wall 

deciTree: main.o doinfo.o docalc.o dotree.o
		gcc -o deciTree main.o doinfo.o docalc.o dotree.o

clean: 
		rm -f *.o 

mrproper: clean
		rm -f deciTree