#include "main.h"

/**
 *  infinite_add- Entry point
 * @n1: a7a
 * @n2: a7aaa
 * @r: a7aaaa
 * @size_r: niggaaa
 * Return: char string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0, result = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i -= 2;
	j -= 2;
	r[size_r] = '\0';
	size_r--;
	for (; size_r >= 0; size_r--)
	{
		if (i < 0 && j < 0)
			break;
		else if (i < 0)
			result = 0 + n2[j] - '0' + carry;
		else if (j < 0)
			result = 0 + n1[i] - '0' + carry;
		else
			result = n1[i] + n2[j] + carry;
		carry = result / 10;
		r[size_r] = result % 10;
	}
	if (size_r >= 0 && (i >= 0 || j >= 0))
		return (NULL);
	return (r);
}
