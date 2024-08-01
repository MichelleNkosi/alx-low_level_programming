#include <stdio.h>

/**
 * pre_main - function that runs before main
 *
 * Description: This function is executed before the main function
 *              and prints a specific message.
 */
void __attribute__((constructor)) pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
