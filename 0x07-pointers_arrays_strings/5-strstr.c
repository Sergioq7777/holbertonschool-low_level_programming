#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 *@haystack: char
 *@needle: char
 * Return: Void.
 */

char *_strstr(char *haystack, char *needle)
{
	int th, tn;

	for (th = 0 ; haystack[th] != '\0' ; th++)
	{
		for (tn = 0 ; needle[tn] != '\0' ; tn++)
		{
			if (haystack[th + tn] != needle[tn])
			{
				break;
			}
		}
		if (!needle[tn])
		{
			return (haystack + th);
		}
	}
	return ('\0');
}
