#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if a character is lower case
 * @parameterch: character to be checked
 * Return: 1 if true, 0 if false
 */

int _islower(char ch)
{
	int val = ch;

	if (val >= 97 && val <= 122)
		return (1);
	return (0);
}
