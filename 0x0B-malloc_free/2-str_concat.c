#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 *
 * @s1: string variable.
 * @s2: string variable.
 *
 * Return: 0 or null.
 */

char *str_concat(char *s1, char *s2)
{

	int n, i, b, c;
	char *a, *empty = "";

	if (s1 == NULL)
	{
		s1 = empty;
	}
	if (s2 == NULL)
	{
		s2 = empty;
	}

	for (n = 0; s1[n] != '\0'; n++)
	{}

	for (i = 0; s2[i] != '\0'; i++)
	{}

	a = malloc(sizeof(char) * n + i + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < n; b++)
	{
		a[b] = s1[b];
	}
	for (b = 0, c = n; b < i; b++, c++)
	{
		a[c] = s2[b];
	}
	return (a);
}
