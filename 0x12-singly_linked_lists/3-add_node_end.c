#include "lists.h"
/**
 * add_node - adds a new node at the end
 * @head: the linked list
 * @str: data value in string
 * Return: a new linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
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
		i = 0;
		while (str[i] != '\0')
			i++;
		new->len = i;
		*head = new->next;
		new->next = NULL;
	}
	*head = new;
	return (*head);
}
