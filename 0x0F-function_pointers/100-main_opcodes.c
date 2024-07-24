#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, otherwise exit with the appropriate status
 */
int main(int argc, char *argv[])
{
int i;
unsigned char *main_ptr;
int num_bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

main_ptr = (unsigned char *)main;

for (i = 0; i < num_bytes; i++)
{
if (i > 0)
printf(" ");
printf("%02x", main_ptr[i]);
}
printf("\n");

return (0);
}
