CC=gcc
all:
	$(CC) -o ultrawal ultrawal.c -g
clean:
	rm -f ultrawal
