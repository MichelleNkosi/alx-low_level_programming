# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89

SRC = _putchar.c _islower.c _isalpha.c _abs.c _isupper.c _isdigit.c \
      _strlen.c _puts.c _strcpy.c _atoi.c _strcat.c _strncat.c \
      _strncpy.c _strcmp.c _memset.c _memcpy.c _strchr.c _strspn.c \
      _strpbrk.c _strstr.c

OBJ = $(SRC:.c=.o)

all: libmy.a

libmy.a: $(OBJ)
	ar -rc libmy.a $(OBJ)
	ranlib libmy.a

clean:
	rm -f $(OBJ) libmy.a

.PHONY: all clean
