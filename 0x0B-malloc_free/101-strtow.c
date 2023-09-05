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
	if (str == NULL)
		return (NULL);
	strcpy(copy, str);
	token = strtok(copy, " ");
	while (token != NULL)
	{
		sum++;
		token = strtok(NULL, " ");
	}
	grid = malloc((sum + 1) * sizeof(char *));
	if (grid == NULL)
		return (NULL);
	token = strtok(str, " ");
	sum = 0;
	while (token != NULL)
	{
		*(grid + sum) = malloc(strlen(token) + 1);
		if (*(grid + sum) == NULL)
			return (NULL);
		*(grid + sum) = token;
		sum++;
	}
	*(grid + sum) = NULL;
	return (grid);
}
