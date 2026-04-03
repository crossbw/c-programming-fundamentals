CC = gcc
CFLAGS = -Wall

cli-calculator: main.o utils.o calculator.o
				$(CC) main.o utils.o calculator.o -o cli-calculator

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c
	$(CC) $(CFLAGS) -c utils.c

calculator.o: calculator.c
	$(CC) $(CFLAGS) -c calculator.c

clean: 
		rm *.o cli-calculator
