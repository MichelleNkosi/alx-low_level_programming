#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int i, sum = 0;
srand(time(NULL));
for (i = 0; i < 83; i++)
{
int choice = rand() % 62;
if (choice < 10)
password[i] = '0' + choice;
else if (choice < 36)
password[i] = 'a' + (choice - 10);
else
password[i] = 'A' + (choice - 36);
sum += password[i];
}
password[83] = (2772 - sum) % 126;
if (password[83] < 32)
password[83] += 32;
password[84] = '\0';
printf("%s\n", password);
return (0);
}
