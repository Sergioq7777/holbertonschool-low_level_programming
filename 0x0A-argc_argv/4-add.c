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
	{
		int x, y = 0;
		char num;

		for (x = 1; x < argc ; x++)
		{
			numero = *argv[x];

			if (isdigit(numero) != 0)
			{
				y = y + atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
		return (0);
	}
}
