#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @n: unsigned int
 * @s2: char
 * @s1: char
 * Return: Never.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i, j, m;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	for (i = 0; s1[i]; i++)
		;

	x = malloc(sizeof(*x) * i + n + 1);

	if (x == NULL)
		return (NULL);

	for (j = 0, m = 0; j < (i + n); j++)
	{
		if (j < i)
		{
			x[j] = s1[j];
		}
		else
		{
			x[j] = s2[m++];
		}
	}
	x[j] = '\0';
	return (x);
}
