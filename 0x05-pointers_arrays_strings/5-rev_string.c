#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
int start = 0;
int end = 0;
char temp;

    /* Find the length of the string */
while (s[end] != '\0')
{
end++;
}
end--;  /* Move end to the last character in the string */

    /* Swap characters from the start and end */
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
