#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list.
 *
 * Description: This function takes a doubly linked list and
 * prints the value of each node's 'n' member, followed by a newline.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	length++;
	h = h->next;
	}

	return (length);
}

