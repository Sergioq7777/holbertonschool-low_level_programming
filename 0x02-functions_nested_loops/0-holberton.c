#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  i;
	char str[9] = "holberton";

	for (i = 0; i <= 8; i++)

		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
