#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This prints all the elements of a linked list
 * @h: This is the linked list of type listint_t to print
 *
 * Return: This equals to the  number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
