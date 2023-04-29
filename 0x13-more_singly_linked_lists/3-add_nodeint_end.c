#include "lists.h"

/**
 * add_nodeint_end - The adds a node at the end of a linked list
 * @head: This is the pointer to the first element in the list
 * @n: This is the data to insert in the new element
 *
 * Return: This returns the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *sim;
	listint_t *temp = *head;

	sim = malloc(sizeof(listint_t));
	if (!sim)
		return (NULL);

	sim->n = n;
	sim->next = NULL;

	if (*head == NULL)
	{
		*head = sim;
		return (sim);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = sim;

	return (sim);
}
