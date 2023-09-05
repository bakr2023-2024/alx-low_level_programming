#include "main.h"

/**
 * strtow - Entry point
 * @str: string
 * Return: array
 */

char **strtow(char *str)
{
	int sum = 0;
	char **grid, *copy, *token;

	if (str == NULL || *str == '\0')
		return (NULL);
	copy = malloc(strlen(str) + 1);
	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	token = strtok(copy, " ");
	while (token != NULL)
	{
		sum++;
		token = strtok(NULL, " ");
	}
	grid = malloc(sum * sizeof(char *));
	if (grid == NULL)
		return (NULL);
	strcpy(copy, str);
	token = strtok(copy, " ");
	sum = 0;
	while (token != NULL)
	{
		*(grid + sum) = malloc(strlen(token) + 1);
		if (*(grid + sum) == NULL)
			return (NULL);
		strcpy(*(grid + sum), token);
		token = strtok(NULL, " ");
		sum++;
	}
	*(grid + sum) = NULL;
	return (grid);
}
