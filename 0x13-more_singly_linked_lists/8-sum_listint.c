#include "lists.h"

/**
 * sum_listint - Function that sum lists
 * @head: head nodo
 *
 * Return: suma
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

