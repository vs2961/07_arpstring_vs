all: arpstring.c
	gcc -o arpstring arpstring.c

run: arpstring
	./arpstring
