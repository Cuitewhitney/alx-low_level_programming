#include "lists.h"

/**
 * sum_listint - This calculates the sum of all the data in a listint_t list
 * @head: the first node in the linked list
 *
 * Return: This returns the resulting sum
 */
int sum_listint(listint_t *head)
{
	int num = 0;
	listint_t *tip = head;

	while (tip)
	{
		num += tip->n;
		tip = tip->next;
	}

	return (num);
}
