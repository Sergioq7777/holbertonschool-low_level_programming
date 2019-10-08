#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 *@haystack: char
 *@needle: char
 * Return: Void.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != *needle && *haystack != '\0' ; haystack++)
		;
	if (*haystack == *needle)
	{
		return (haystack);
	}
	else
	{
		return ('\0');
	}
}
