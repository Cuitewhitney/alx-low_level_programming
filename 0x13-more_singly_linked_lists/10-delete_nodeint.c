#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes a node in a linked list at a certain index
 * @head: This is the pointer to the first element in the list
 * @index: This is the index of the node to delete
 *
 * Return: if sucessful return 1 else return -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tip = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tip);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tip || !(tip->next))
			return (-1);
		tip = tip->next;
		i++;
	}

	current = tip->next;
	tip->next = current->next;
	free(current);

	return (1);
}
