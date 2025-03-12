#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
	result[i + j] = s2[j];
	result[i + j] = '\0';

	return (result);
}
