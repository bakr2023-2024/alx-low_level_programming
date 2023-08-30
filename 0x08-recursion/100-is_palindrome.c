#include "main.h"
/**
 * _strlen - Entry point
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * helper - Entry point
 * @s: string
 * @length: len
 * @idx: index
 * Return: length
 */
int helper(char *s, int length, int idx)
{
	if (idx >= length - idx - 1)
		return (0);
	if (s[idx] != s[length - idx - 1])
		return (0);
	return (1 + helper(s, length, idx + 1));
}
/**
 * is_palindrome - Entry point
 * @s: string
 * Return: number
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len == 0)
		return (1);
	return ((helper(s, len, 0) == len / 2) ? 1 : 0);
}
