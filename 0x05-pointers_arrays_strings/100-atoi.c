#include "main.h"

/**
 * _atoi - Entry point
 * @s: string
 * Return: number
 */

int _atoi(char *s)
{
	int i = 0, is_nega = 0, len = 0, pos = -1, itr;

	for (itr = 0; *(s + itr) != '\0'; itr++)
	{
		char j = *(s + itr), l = *(s + itr + 1);

		if (j == '-')
			is_nega = (is_nega == 1) ? 0 : 1;
		if (j >= 48 && j <= 57)
		{
			len++;
			if (pos == -1)
				pos = itr;
			if (l != '\0' && (l >=57 || l <= 48))
				break;

		}
	}
	for (itr = pos; len != 0; itr++)
	{
		int k = *(s + itr) - '0';

		i += k * (len--);
	}
	return ((is_nega == 1) ? -i : i);
}
