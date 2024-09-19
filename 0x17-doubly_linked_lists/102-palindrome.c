#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to check if a number is palindrome */
int is_palindrome(int n)
{
int reversed = 0, original = n, remainder;

while (n != 0)
{
remainder = n % 10;
reversed = reversed * 10 + remainder;
n /= 10;
}
return (original == reversed);
}

/* Function to find the largest palindrome product of two 3-digit numbers */
int largest_palindrome_product(void)
{
int i, j, product, largest = 0;

for (i = 999; i >= 100; i--)
{
for (j = i; j >= 100; j--)
{
product = i * j;
if (is_palindrome(product) && product > largest)
{
largest = product;
}
}
}
return (largest);
}

int main(void)
{
int result = largest_palindrome_product();

/* Write the result to the file 102-result */
FILE *fp = fopen("102-result", "w");
if (fp == NULL)
{
fprintf(stderr, "Could not open file 102-result\n");
return (1);
}
fprintf(fp, "%d", result);
fclose(fp);

return (0);
}
