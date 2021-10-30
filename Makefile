main: main.c override.so Makefile
	gcc -o main main.c
	./main.sh

override.so: override.c
	gcc -shared -o override.so override.c
