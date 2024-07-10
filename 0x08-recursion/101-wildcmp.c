#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be identical,
 *           otherwise returns 0.
 * @s1: the first string to compare
 * @s2: the second string to compare which can contain '*'
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
return (_wildcmp_helper(s1, s2, 0, 0));
}

/**
 * _wildcmp_helper - recursive helper function to compare strings
 * @s1: the first string to compare
 * @s2: the second string to compare which can contain '*'
 * @s1_index: current index in s1
 * @s2_index: current index in s2
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int _wildcmp_helper(char *s1, char *s2, int s1_index, int s2_index)
{
if (s1[s1_index] == '\0' && s2[s2_index] == '\0')
return (1);

if (s2[s2_index] == '*')
{
if (_wildcmp_helper(s1, s2, s1_index, s2_index + 1))
return (1);
if (s1[s1_index] != '\0' && _wildcmp_helper(s1, s2, s1_index + 1, s2_index))
return (1);
}
else if (s1[s1_index] == s2[s2_index])
{
return (_wildcmp_helper(s1, s2, s1_index + 1, s2_index + 1));
}
return (0);
}
