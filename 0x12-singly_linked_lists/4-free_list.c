#include "lists.h"
/**
 * free_list - entry point
 * @head: ambola
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		head = ptr->next;
		free (ptr);
	}
}
