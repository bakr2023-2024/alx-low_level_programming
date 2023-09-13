#include "main.h"
/**
 * print_name - Entry point
 * @name: namee
 * @f: ambola
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
