#include "main.h"
/**
 * _isdigit - checks for a digit 0~9
 * @c: ascii value to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 58) ? 1 : 0);
}
