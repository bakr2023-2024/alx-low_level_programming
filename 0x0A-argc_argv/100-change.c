#include "main.h"

/**
 * main - Entry point
 * @argc: num
 * @argv: string
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = 0;
		
		for (; argv[1][i] != '\0'; i++);
		{
			if (argv[1][i] < 48 || argv[1][i] > 57)
			{
				printf("Error\n");
				return (0);
			}
		}
		int coins = atoi(argv[1]);
		int sum = 0;

		if (coins < 0)
			printf("0\n");
		else
		{
			while (coins > 0)
			{
				if (coins > 100)
				{
					coins -= 100;
					sum++;
				}
				else if (coins > 50)
				{
					coins -= 50;
					sum++;
				}
				else if (coins > 25)
				{
					coins -= 25;
					sum++;
				}
				else if (coins > 10)
				{
					coins -= 10;
					sum++;
				}
				else if (coins > 5)
				{
					coins -= 5;
					sum++;
				}
				else if (coins > 2)
				{
					coins -= 2;
					sum++;
				}
				else if (coins > 1)
				{
					coins -= 1;
					sum++;
				}
			}
			printf("%d\n", sum);
		}
		return (0);
	}
}
