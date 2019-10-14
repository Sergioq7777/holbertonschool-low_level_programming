#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 *@dest: char
 *@src: char
 * Return: Void.
 */

char *_strcat(char *dest, char *src)
{
	char *x = dest;

	for (; *dest != '\0' ; dest++)
		;
	for (; *src != '\0' ; src++)
	{
		*dest = *src;
		 dest++;
	}

	*dest = '\0';
	return (x);

}
