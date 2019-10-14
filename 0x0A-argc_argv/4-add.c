#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 *@argc: int
 *@argv: char
 * Return: Always.
 */

int main(int argc, char *argv[])
{
	int i, y = 0;
	char numero;

	for (i = 1; i < argc; i++)
	{
		numero = *argv[i];

		if (isdigit(numero) != 0)
		{
			y = y + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", y);
	return (0);
}
