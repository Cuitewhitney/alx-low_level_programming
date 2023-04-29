#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: the first node in the linked list
 * @index: This is the index of the node to return
 *
 * Return: This returns the pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tip = head;

	while (tip && i < index)
	{
		tip = tip->next;
		i++;
	}

	return (tip ? tip : NULL);
}
