#include "lists.h"

/**
 * pop_listint - This deletes the head node of a linked list
 * @head: This is the pointer to the first element in the linked list
 *
 * Return: This returns the data inside the elements that was deleted,
 * or the list is empty if it is 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tip;
	int sim;

	if (!head || !*head)
		return (0);

	sim = (*head)->n;
	tip = (*head)->next;
	free(*head);
	*head = tip;

	return (sim);
}
