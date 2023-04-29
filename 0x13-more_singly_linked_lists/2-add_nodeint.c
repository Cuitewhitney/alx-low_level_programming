#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: This isnthe pointer to the first node in the list
 * @n: This is the data to insert in that new node
 *
 * Return: The pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *sim;

	sim = malloc(sizeof(listint_t));
	if (!sim)
		return (NULL);

	sim->n = n;
	sim->next = *head;
	*head = sim;

	return (sim);
}
