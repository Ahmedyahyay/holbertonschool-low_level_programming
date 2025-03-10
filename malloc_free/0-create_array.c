#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function creates an array of chars
 * @size: first parameter
 * @c: second parameter
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
