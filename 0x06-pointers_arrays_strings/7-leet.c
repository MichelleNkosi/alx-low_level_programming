#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
char replacements[] = "aAeEoOtTlL";
char leet_chars[] = "4433007711";
int i, j;
i = 0;
while (str[i] != '\0')
{
j = 0;
while (replacements[j] != '\0')
{
if (str[i] == replacements[j])
{
str[i] = leet_chars[j];
}
j++;
}
i++;
}
return (str);
}
