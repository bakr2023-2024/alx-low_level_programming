#include "main.h"

/**
 * argstostr - Entry point
 * @ac: number
 * @av: strings
 * Return: stringconcat
 */

char *argstostr(int ac, char **av)
{
	int sum = 0, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sum += strlen(av[i]);
	str = malloc(sum * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (str);
}
