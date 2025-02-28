#include "main.h"

/**
 * puts_half - Prints the second half of a string,
 * followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
	len++;

	i = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}

	_putchar('\n');
}
