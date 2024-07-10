#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check for primality
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - helper function to check for primality
 * @n: the number to check for primality
 * @divisor: the current divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime_helper(int n, int divisor)
{
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (_is_prime_helper(n, divisor + 1));
}
