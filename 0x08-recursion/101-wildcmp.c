#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the string identical,
 *           otherwise returns 0.
 * @s1: the first string to compare
 * @s2: the second string to compare which can contain '*'
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
return (_wildcmp_helper(s1, s2));
}
/**
 * _wildcmp_helper - recursive helper function to compare strings
 * @s1: the first string to compare
 * @s2: the second string to compare which can contain '*'
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int _wildcmp_helper(char *s1, char *s2)
{
if (*s2 == '*')
{

if (*s1 == '\0')
return (_wildcmp_helper(s1, s2 + 1));

return (_wildcmp_helper(s1, s2 + 1) || _wildcmp_helper(s1 + 1, s2));
}
else if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s1 == *s2)
{
return (_wildcmp_helper(s1 + 1, s2 + 1));
}
return (0);
}
