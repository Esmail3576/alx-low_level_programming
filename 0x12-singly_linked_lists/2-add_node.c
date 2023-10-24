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

	if (head == NULL)
	{
		head->str = str;
		i = 0;
		while (str[i] != '\0')
			i++;
		head->len = i;
		head->next = NULL;
	}
	else
	{
		head->str = str;
		while (str[i] != '\0')
			i++;
		head->len = i;
		head->next = head;
	}
	return (head);
}
