#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 *@dest: integer
 *@src: integer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	for (; *src  != '\0' ; src++)
	{
		*dest = *src;
		dest++;

	}
	*dest = '\0';
	return (x);
}
