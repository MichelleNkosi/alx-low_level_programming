#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, or NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, length = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
length++;
length++;
}
str = malloc((length + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
