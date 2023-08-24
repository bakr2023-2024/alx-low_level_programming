#include <stdio.h>

/**
 * cap_string - Entry point
 * @s: string
 * Return: the capitalizted
 */

char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ',' || s[i] == '.' || s[i] == '!')
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		if (s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')')
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		if (s[i] == '{' || s[i] == '}' || s[i] == '\n' || s[i] == '\t')
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		if (s[i] == ' ' && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] -= 32;
	}
	return (s);
}
