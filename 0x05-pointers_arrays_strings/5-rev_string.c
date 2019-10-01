#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 *@s: integer
 * Return:  void.
 */

void rev_string(char *s)
{
	int a;
	int b;
	char i;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	--a;

	b = 0
	while (b < a)
	{
		i = s[a];
		s[a] = s[b];
		s[b] = i;

		++b;
		--a;

	}
}
