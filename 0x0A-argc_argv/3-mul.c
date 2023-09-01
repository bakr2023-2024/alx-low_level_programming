#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: buena
 * @argv: kuena
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		int a = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", a);
	}
	return (0);
}
