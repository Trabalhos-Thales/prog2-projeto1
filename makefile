cc = gcc
cflags = -Wall -std=c90 -c 

gps: gps.o libfiles.o
	$(cc) gps.o libfiles.o -o gps

main: gps.c
	$(cc) $(cflags) gps.c 

libfiles: libfiles.c
	$(cc) $(cflags) libfiles.c 

clean:
	rm *.o gps