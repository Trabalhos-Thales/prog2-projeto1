cc = gcc
cflags = -Wall -std=c90 -c 

gps: gps.o
	$(cc) gps.o -o gps

main: gps.c
	$(cc) $(cflags) gps.c -o gcc.o

clean:
	rm *.o gps