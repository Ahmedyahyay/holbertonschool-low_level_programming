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
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
			if (*second == '\0')
				return (haystack);
	}
				return (NULL);


}
