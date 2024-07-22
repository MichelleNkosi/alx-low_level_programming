#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _error - prints an error message and exits with status 98
 */
void _error(void) { printf("Error\n"); exit(98); }

/**
 * _isnumber - checks if a string is composed entirely of digits
 * @s: the string to check
 * Return: 1 if the string is a number, 0 otherwise
 */
int _isnumber(char *s) { int i = 0; while (s[i]) { if (s[i] < '0' || s[i] > '9') return (0); i++; } return (1); }

/**
 * _mul - multiplies two positive numbers and prints the result
 * @num1: the first number as a string
 * @num2: the second number as a string
 */
void _mul(char *num1, char *num2)
{
int len1 = strlen(num1), len2 = strlen(num2), i, j;
int *result = calloc(len1 + len2, sizeof(int));
if (!result) _error();

for (i = len1 - 1; i >= 0; i--)
for (j = len2 - 1; j >= 0; j--)
result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');

for (i = len1 + len2 - 1; i > 0; i--)
if (result[i] >= 10) { result[i - 1] += result[i] / 10; result[i] %= 10; }

i = 0;
while (i < len1 + len2 - 1 && result[i] == 0) i++;
for (; i < len1 + len2; i++) printf("%d", result[i]);
printf("\n");
free(result);
}

/**
 * main - multiplies two positive numbers given as arguments
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 on success, exits with status 98 on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !_isnumber(argv[1]) || !_isnumber(argv[2])) _error();
_mul(argv[1], argv[2]);
return (0);
}
