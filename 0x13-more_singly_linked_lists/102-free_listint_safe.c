#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - This frees a linked list
 * @h: This is the pointer to the first node in the linked list
 *
 * Return: it is the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t height = 0;
	int diff;
	listint_t *tip;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tip = (*h)->next;
			free(*h);
			*h = tip;
			height++;
		}
		else
		{
			free(*h);
			*h = NULL;
			height++;
			break;
		}
	}

	*h = NULL;

	return (height);
}
