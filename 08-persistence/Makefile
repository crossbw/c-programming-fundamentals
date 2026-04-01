#Variables
CC = gcc
CFLAGS = -Wall

# The Final Program
persistent_erp: main.o invoice.o utils.o
				$(CC) main.o invoice.o utils.o -o persistent_erp

# How to make object files
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

invoice.o: invoice.c
	$(CC) $(CFLAGS) -c invoice.c

utils.o: utils.c
	$(CC) $(CFLAGS) -c utils.c
# Clean the folder (optional)
clean: 
		rm *.o *.dat persistent_erp
