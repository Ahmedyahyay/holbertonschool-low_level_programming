#include "main.h"
#include <stdio.h>
/**
 * _strstr - function name
 * @haystack: first parameter
 * @needle: second parameter
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		if (haystack[i] == needle[j])
		return (needle);

	}
		return (NULL);

}
