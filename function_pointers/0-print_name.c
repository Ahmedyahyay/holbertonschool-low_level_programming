#include "main.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer.
 * @name: Pointer to the name string to be printed.
 * @f: Pointer to a function that takes a string and prints it.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
