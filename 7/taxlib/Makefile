all:
	gcc -c tax.c -o tax.o
	gcc -shared -fPIC tax.o -o libtax.so
.PHONY:clean
clean:
	rm tax.o libtax.so
