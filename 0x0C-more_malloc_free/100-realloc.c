#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_realloc - function that creates an array of integers.
 * @ptr: int
 * @old_size: int
 * @new_size: int
 * Return: Never.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		_memcpy(p, ptr, old_size);
		free(ptr);
	}
	return (p);
}

/**
 * *_memcpy - function that creates an array of integers.
 * @dest: char
 * @src: char
 * @n: int
 * Return: Never.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
