#include "variadic_functions.h"
/**
 * print_all - ambola
 * @format: kaka
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str = "\n";
	char c;
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		c = format[i];
		switch (c)
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
		if (format[i + 1] != '\0' && (c == 's' || c == 'c' 
					|| c == 'i' || c == 'f'))
			printf(", ");
		i++;
	}
	str = "\n";
	printf("%s", str);
}
