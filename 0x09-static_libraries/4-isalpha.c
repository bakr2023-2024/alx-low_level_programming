#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if the character is a letter
 * @c: ascii value of character to be checked
 * Return: Always 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 127)
		return (1);
	else
		return (0);
}
