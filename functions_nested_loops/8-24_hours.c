#include "main.h"
/**
 * jack_bauer - function prints every minutes of the day
 * Return: void
 */


void jack_bauer(void)
{
	int i, e;

	for (i = 0; i < 24; i++)
	{
		for (e = 0; e < 60; e++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(e / 10 + '0');
			_putchar(e % 10 + '0');
			_putchar('\n')

		}
	}



}
