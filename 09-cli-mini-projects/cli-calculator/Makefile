ifeq ($(OS),Windows_NT)
    RM = del /Q 2>NUL
    EXT = .exe
else
    RM = rm -f
    EXT =
endif

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = cli-calculator$(EXT)
OBJ = main.o utils.o calculator.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	$(RM) *.o $(TARGET)