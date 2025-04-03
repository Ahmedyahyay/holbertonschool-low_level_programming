#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: Pointer to the head of the list.
 *
 * Description: This function calculates the number of nodes
 * in a doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
	length++;
	h = h->next;
	}

	return (length);
}

