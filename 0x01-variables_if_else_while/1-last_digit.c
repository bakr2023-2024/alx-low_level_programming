#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n % 10 > 5)
		printf("is %d and is greater than 5", n % 10);
	else if (n % 10 == 0)
		printf("is %d and is 0", n % 10);
	else if (n % 10 < 6)
		printf("is %d and is less than 6 and not 0", n % 10);
	printf("\n");
	return (0);
}
