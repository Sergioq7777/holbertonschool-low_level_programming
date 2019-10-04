#include "holberton.h"

/**
 * *cap_string - check the code for Holberton School students.
 *@s: char
 * Return: Void.
 */

char *cap_string(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		if (a == 0 && (s[a] >= 'a' && s[a] <= 'z'))
		{
			s[a] = s[a] - 32;
		}

		if (s[a] == ',' || s[a] == ';' || s[a] == '.' ||
		    s[a] == '!' || s[a] == '?' || s[a] == '"' ||
		    s[a] == '(' || s[a] == ')' || s[a] == '{' ||
		    s[a] == '}' || s[a] == '\n' || s[a] == ' ' ||
		    s[a] == '\t')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
	}
	return (s);
}
