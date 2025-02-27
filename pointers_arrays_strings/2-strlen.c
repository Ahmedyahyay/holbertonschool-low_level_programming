#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns length
 * @s: function parameter
 * Return: void
 */


int _strlen(char *s)
{
	int counter = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
		return (counter);
}
