#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory.
 * @str: char pointer
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int i1;
	int i2;
	char *copy;

	if (str == '\0')
	{
		return ('\0');
	}

	for (i1 = 0; str[i1] != '\0'; i1++)
		;

	copy = malloc(sizeof(*copy) * i1 + 1);

	if (copy == '\0')
	{
		return ('\0');
	}

	for (i2 = 0; str[i2] != '\0'; i2++)
	{
		copy[i2] = str[i2];
	}
	return (copy);
}
