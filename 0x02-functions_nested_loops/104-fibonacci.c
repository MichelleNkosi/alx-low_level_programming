#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2;
unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
unsigned long half1, half2;
unsigned long max = 1000000000; /* 10^9 */

printf("%lu, %lu", fib1, fib2);

for (count = 3; count <= 98; count++)
{
if (fib1 + fib2 < max)
{
fib2 = fib1 + fib2;
fib1 = fib2 - fib1;
printf(", %lu", fib2);
}
else
{
fib1_half1 = fib1 / max;
fib1_half2 = fib1 % max;
fib2_half1 = fib2 / max;
fib2_half2 = fib2 % max;

half1 = fib1_half1 + fib2_half1;
half2 = fib1_half2 + fib2_half2;

if (half2 >= max)
            {
half1 += 1;
half2 -= max;
}

printf(", %lu%09lu", half1, half2);

fib1 = fib2;
fib2 = half1 * max + half2;
}
}

printf("\n");
return (0);
}
