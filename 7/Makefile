all:
	make -C ./taxlib all
	gcc main.c -o tax -I${PWD}/taxlib/  -ltax
.PHONY:clean
clean:
	make -C ./taxlib clean
	rm  tax
