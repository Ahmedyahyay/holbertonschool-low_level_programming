#include "main.h"
/**
 * swap_int - function the values of two integers
 * @a: first pointer
 * @b: seconed pointer
 * Return: void
 */


void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
