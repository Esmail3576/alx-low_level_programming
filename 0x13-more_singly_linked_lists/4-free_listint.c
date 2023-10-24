#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head:
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
