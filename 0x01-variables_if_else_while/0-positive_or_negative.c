#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the variable n and prints whether
 * it is positive, negative, or zero
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Check if n is positive, zero, or negative and print the result */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
