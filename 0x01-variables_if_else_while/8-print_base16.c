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
	int b;
	int a;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
		for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
