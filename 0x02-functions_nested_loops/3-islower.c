#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if a character is lower case
 * @parameterc: ascii value of character to be checked
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
