#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 1 (Fail)
 */
int main(void)
{
	unsigned int i;
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr," ");
	for (i = 0; i < sizeof(msg); i++)
	{
		putchar(msg[i]);
	}
	return (1);
}
