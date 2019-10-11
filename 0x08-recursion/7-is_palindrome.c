#include "holberton.h"
#include <stdio.h>

/**
 * _fun1 - check the code for Holberton School students.
 *@s: char
 * Return: Always.
 */

int _fun1(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_fun1(s) + 1);
}

/**
 * _fun2 - check the code for Holberton School students.
 *@s: char
 *@leng: int
 * Return: Always.
 */

int _fun2(char *s, int leng)
{
	if (*s != s[leng])
		return (0);
	else if (*s == '\0')
		return (1);
	return (_fun2(s + 1, leng - 2));
}

/**
 * is_palindrome - check the code for Holberton School students.
 *@s: char
 * Return: Always.
 */

int is_palindrome(char *s)
{
	int a, b;

	a = _fun1(s);
	b = _fun2(s, a - 1);
	return (b);
}
