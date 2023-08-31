#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: string
 * Return: number
 */
int _strlen(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * helper - Entry point
 * @s1: string1
 * @s2: string2
 * @idx1: index1
 * @idx2: index2
 * Return: Always number
 */
int helper(char *s1, char *s2, int idx1, int idx2)
{
	if (s1[idx1] == '\0' && s2[idx2] != '\0')
	{

		return (0);
	}
	else if(s1[idx1] == '\0')
		return (1);
	if (s2[idx2] == '*')
	{
		if (s1[idx1] == s2[idx2 + 1])
		{
			idx2++;
		}
		else
		{
			idx1++;
		}
	}
	else
	{
		if (s1[idx1] == s2[idx2])
		{
			idx1++;
			idx2++;
		}
		else
		{
			return (-0);
		}
	}
	return (helper(s1, s2, idx1, idx2));
}
/**
 * wildcmp - Entry point
 * @s1: string1
 * @s2: string2
 * Return: ambola
 */
int wildcmp(char *s1, char *s2)
{
	int len, help;

	len = _strlen(s1);
	help = helper(s1, s2, 0, 0);
	printf("length: %d against helper: %d\n",len,help);
	return ((len == help) ? 1 : 0);
}
