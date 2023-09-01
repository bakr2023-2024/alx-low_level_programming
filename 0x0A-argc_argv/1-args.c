#include "main.h"

/**
 * main - Entry point
 * @argc: num
 * @argv: string
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char **ag = argv;
	unsigned long int a = sizeof(ag);

	ag = NULL;
	a = 0;
	printf("%d\n", argc);
	return (0);
}
