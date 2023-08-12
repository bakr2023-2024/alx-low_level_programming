#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 1 (Fail)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned long int i;

	for (i = 0; i < sizeof(msg); i++)
	{
		putchar(msg[i]);
	}
	return (1,"error");
}
