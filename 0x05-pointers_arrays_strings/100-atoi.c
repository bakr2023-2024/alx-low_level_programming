#include "main.h"

/**
 * _atoi - Entry point
 * @s: string
 * Return: number
 */

int _atoi(char* s)
{
	int i = 0, is_nega = 0, len = 0, pos = -1, itr;

	for (itr = 0; *(s + itr) != '\0'; itr++)
	{
		int j = *(s + itr);

		if (j >= 48 && j <= 57)
		{
			len++;
			if (pos == -1)
				pos = itr;
			if(itr != 0 && *(s + itr - 1) == '-')
				is_nega = 1;
		}
	}
	if (len == 0)
		return (0);
	for (itr = pos; len != 0; itr++)
	{
		int k = *(s + itr) - '0';

		i += k * (len--);
	}
	return ((is_nega == 1) ? -k : k);
}
