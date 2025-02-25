#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function prints numbers from 1 to 14 ten times
 */


void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j <= 57)
		{
			_putchar(j);
		}
			else if (j > 57)
		{
			_putchar(49);
			_putchar(j % 10);
		}
		}
			printf("\n");
	}
}
