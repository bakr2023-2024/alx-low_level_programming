#include "lists.h"
/**
 * add_node_end - entry point
 * @head: kaka
 * @str: bibi
 * Return: ambola
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *i = *head;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (i == NULL)
	{
		(*head) = ptr;
		return (ptr);
	}
	while (i->next != NULL)
		i = i->next;
	i->next = ptr;
	return (ptr);
}
