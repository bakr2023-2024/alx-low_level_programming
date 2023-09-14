#include "variadic_functions.h"
/**
 * print_all - ambola
 * @format: kaka
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str = "\n";
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	str = "\n";
	printf("%s", str);
}
