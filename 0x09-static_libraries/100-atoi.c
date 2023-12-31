#include "main.h"

/**
 * _atoi - Entry point
 * @s: string
 * Return: number
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	int is_nega = 0, len = 0, pos = -1, itr;

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
			if (l != '\0' && (l > 57 || l < 48))
				break;
		}
	}
	for (; len != 0; len--)
	{
		int k = *(s + pos++) - '0', m = 1, itr2;

		for (itr2 = 1; itr2 < len; itr2++)
			m *= 10;
		i += k * m;
	}
	return ((is_nega == 1) ? -i : i);
}
