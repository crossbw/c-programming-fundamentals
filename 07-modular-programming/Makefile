#Variables
CC = gcc
CFLAGS = -Wall

# The Final Program
mini_erp_system: main.o invoice.o utils.o
				$(CC) main.o invoice.o utils.o -o mini_erp_system

# How to make object files
main.o: main.c
	$(CC) -c main.c

invoice.o: invoice.c
	$(CC) -c invoice.c

utils.o: utils.c
	$(CC) -c utils.c

# Clean the folder (optional)
clean: 
		rm *.o mini_erp_system
