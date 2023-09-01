#include "main.h"

/**
 * main - Entry point
 * @argc: num
 * @argv: string
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *ag = argv;

	ag = NULL;
	printf("%ld\n", argc - sizeof(ag));
	return (0);
}
