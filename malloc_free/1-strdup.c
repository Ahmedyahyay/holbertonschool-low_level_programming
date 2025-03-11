#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string to a new allocated space in memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
    char *dup;
    int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup = malloc((len + 1) * sizeof(char));

    if (dup == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}

