#include "lists.h"
/**
 * add_nodeint - dds a new node at the beginning of a listint_t list.
 * @n:
 * Return:
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);
	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
