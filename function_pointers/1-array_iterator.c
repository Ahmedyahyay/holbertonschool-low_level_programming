#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function executes a function
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
