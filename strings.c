#include "monty.h"

/**
 * _strlen - string length
 *
 * @s: string operand
 *
 * Return: l
 *
 */

int _strlen(char *s)
{
	int l = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to compare
 *
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
