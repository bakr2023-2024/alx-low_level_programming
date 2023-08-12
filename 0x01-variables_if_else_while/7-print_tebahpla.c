#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	 char start;

	for (start = 'z'; start >= 'a'; start--)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
