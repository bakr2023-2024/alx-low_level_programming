#include "lists.h"
/**
 * add_node - entry point
 * @head: kaka
 * @str: bibi
 * Return: ambola
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(head));
	
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = head;
	return (ptr);
}
