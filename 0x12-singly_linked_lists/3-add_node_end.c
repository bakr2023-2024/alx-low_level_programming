#include "lists.h"
/**
 * add_node_end - entry point
 * @head: kaka
 * @str: bibi
 * Return: ambola
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(*head));
	list_t *ptr = *head;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
