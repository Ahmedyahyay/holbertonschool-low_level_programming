#include "main.h"
/**
 * _memcpy - function copies from src to dest
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
		return (dest);

}
