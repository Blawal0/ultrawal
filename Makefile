prefix = /usr/local
CC=gcc
all:
	$(CC) -o ultrawal ultrawal.c -g
install:
	install ultrawal $(DESTDIR)$(prefix)/bin
clean:
	rm -f ultrawal
