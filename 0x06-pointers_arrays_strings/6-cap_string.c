#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 *
 * Return: the pointer to the resulting string
 */
char *cap_string(char *str)
{
char separators[] = " \t\n,;.!?\"(){}";
int i = 0;
int capitalize = 1;

while (str[i])
{
if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
capitalize = 0;
}
else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize = 1;
}
else
{
capitalize = 0;
}
i++;
}
return (str);
}
