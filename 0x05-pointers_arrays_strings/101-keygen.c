#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * @parameter:
 * Return: Always 0 (Success)
 */

int main(void)
{
	srand(time(0));
	int r = rand()%20+1;
	printf("%d",r);
	return (0);
}
