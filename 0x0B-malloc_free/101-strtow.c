#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
int count = 0, in_word = 0;
while (*str)
{
if (*str == ' ')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL if failure
 */
char **strtow(char *str)
{
char **words, *word_start;
int i, k = 0, len = 0, word_count;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (*str)
{
if (*str == ' ')
{
if (len > 0)
{
words[k] = malloc((len + 1) * sizeof(char));
if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}
for (i = 0; i < len; i++)
words[k][i] = word_start[i];
words[k][len] = '\0';
k++;
len = 0;
}
}
else if (len == 0)
{
word_start = str;
len = 1;
}
else
{
len++;
}
str++;
}
if (len > 0)
{
words[k] = malloc((len + 1) * sizeof(char));
if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}
for (i = 0; i < len; i++)
words[k][i] = word_start[i];
words[k][len] = '\0';
}
words[word_count] = NULL;
return (words);
}
