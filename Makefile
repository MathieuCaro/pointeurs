pointeurs: pointeurs.o main.o
	gcc -o pointeurs pointeurs.o main.o

pointeurs.o: pointeurs.c
	gcc -o pointeurs.o -c pointeurs.c -W -Wall -ansi -pedantic

main.o: main.c
	gcc -o main.o -c main.c -W -Wall ansi -pedantic