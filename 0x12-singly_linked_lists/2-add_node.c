#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: the linked list
 * @str: data value in string
 * Return: a new linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t new;

	new = *head;
	if (head == NULL)
	{
		new->str = strdup(str);
		i = 0;
		while (str[i] != '\0')
			i++;
		new->len = i;
		new->next = NULL;
	}
	else
	{
		new->str = strdup(str);
		while (str[i] != '\0')
			i++;
		new->len = i;
		new->next = head;
	}
	*head = new;
	return (*head);
}
