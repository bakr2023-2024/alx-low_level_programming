#include "variadic_functions.h"
/**
 * print_numbers - ambola
 * @separator: kaka
 * @n: bibi
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list args;

	va_start(args, n);
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
