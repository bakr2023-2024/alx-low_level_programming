#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: namee
 * @f: ambola
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL)
		return;
	f(name);
}
