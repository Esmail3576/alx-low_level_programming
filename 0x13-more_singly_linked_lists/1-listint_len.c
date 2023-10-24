#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
