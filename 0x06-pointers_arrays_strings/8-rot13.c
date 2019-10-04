#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 *@str: char
 * Return: Void.
 */

char *rot13(char *str)
{
	int x, y;

	char rot1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot3[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (x = 0 ; str[x] != '\0'; x++)
	{
		for (y = 0 ; rot1[y] != '\0'; y++)
		{
			if (str[x] == rot1[y])
			{
				str[x] = rot3[y];
				break;
			}
		}
	}
	return (str);
}
