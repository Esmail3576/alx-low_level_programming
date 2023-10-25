#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t
 * @head: a pointer to linked list
 * Return: sum of data vlaues of linked list
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
