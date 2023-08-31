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
	printf("current indices: idx1: %d idx2: %d\n",idx1,idx2);
	printf("comparing %s with %s\n",s1 + idx1,s2 + idx2);
	if (s2[idx2] == '\0')
	{
		printf("ended\n");
		return (idx2);
	}
	if (s2[idx2] == '*')
	{
		if (s1[idx1] == s2[idx2 + 1])
		{
			printf("wildcard success\n");
			idx2++;
		}
		else 
		{
			printf("wildcard fail\n");
			idx1++;
		}
	}
	else
	{
		if (s1[idx1] == s2[idx2])
		{
			printf("success\n");
			idx1++;
			idx2++;
		}
		else
		{
			printf("fail");
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
	return (helper(s1, s2, 0, 0) == _strlen(s2) ? 1 : 0);
}
