#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int n = 1231952;
	int i = 2;
	int max = -1;

	while (n != 1)
	{
		if (n % i == 0)
			n /= i;
		else
			i++;
		if (max < i)
			max = i;
	}
	printf("%d", max);
	return (0);
}
