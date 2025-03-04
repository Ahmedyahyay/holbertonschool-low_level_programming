#include "main.h"
#include <stddef.h>
/**
 * _strchr - function Returns a pointer to the first occurrence
 * @s: first parameter
 * @c: second parameter
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
		if (*s == c)
		return (s);
		return (NULL);
}
