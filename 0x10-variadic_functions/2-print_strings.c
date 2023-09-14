#include "variadic_functions.h"
/**
 * print_strings - ambola;
 * @separator: kaka
 * @n: bibi
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *arg;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		arg = va_arg(args, n);
		printf("%s", (arg == NULL) ? "(nil)" : arg);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
