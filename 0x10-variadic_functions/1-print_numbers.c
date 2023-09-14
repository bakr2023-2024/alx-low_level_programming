#include "variadic_functions.h"
/**
 * print_numbers - ambola
 * @separator: kaka
 * @n: bibi
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *delim = separator;
	unsigned int i = 0;
	int num;
	va_list args;

	if (n == 0)
		return;
	if (delim == NULL)
		delim = "";
	va_start(args, n);
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", delim);
		else
			printf("\n");
	}
	va_end(args);
}
