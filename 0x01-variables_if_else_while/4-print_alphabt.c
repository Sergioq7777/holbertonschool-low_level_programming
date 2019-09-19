#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b;
	char q = 'q';
	char e = 'e';

	for (b = 'a'; b <= 'z'; b++)
		if ((b != q) && (b != e))
			putchar(b);
	putchar('\n');
	return (0);
}
