#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character value to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
