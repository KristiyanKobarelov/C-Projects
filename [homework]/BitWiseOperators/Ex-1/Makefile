all: main

quadraticroots.o:
	gcc -S quadraticroots.c -o quadraticroots.o

main: quadraticroots.o
	gcc main.c quadraticroots.o -o main

clean:
	rm -f *.out *.o