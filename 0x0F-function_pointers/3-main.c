#include "3-calc.h"
/**
 * main - kaka
 * @argc: cannavaro
 * @argv: kirahoritsh
 * Return: pele
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	op = argv[2];
	switch (op[0])
	{
		case '+':
			break;
		case '-':
			break;
		case '/':
			break;
		case '*':
			break;
		case '%':
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(op);
	printf("%d\n", f(i, j));
	return (0);
}
