#include "main.h"
/**
 * print_rev - function prints string in reverse
 * @s: function pointer
 *Return: void
 */
void print_rev(char *s)
{
	int i, j, leng;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)

	leng = i;

	for (j = leng - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}

	_putchar('\n');
}
