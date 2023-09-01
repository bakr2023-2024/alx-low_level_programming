#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: buena
 * @argv: kuena
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i, a = 0;
		int j;

		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				printf("checking argv[%d] value: %c\n", i, argv[i][j]);
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			a += atoi(argv[i]);
		}
		printf("%d\n", a);
	}
	return (0);
}
