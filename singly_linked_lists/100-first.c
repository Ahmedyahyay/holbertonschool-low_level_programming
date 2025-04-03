#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints a specific text before the main function.
 *
 * Description: This function is automatically executed before the
 * main function due to the constructor attribute.
 * It prints two lines of text to the standard output.
 *
 * Return: Nothing.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

