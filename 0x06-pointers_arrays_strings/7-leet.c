#include "holberton.h"

/**
 * *leet - check the code for Holberton School students.
 *@str: char
 * Return: Void.
 */

char *leet(char *str)
{
	int len;
	int x;

	char lett[11] = "aAeEoOtTlL";
	char numb[11] = "4433007711";

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		for (len = 0 ; lett[len] != '\0' ; len++)
		{
			if (str[x] == lett[len])
			{
				str[x] = numb[len];
			}
		}
	}
	return (str);
}
