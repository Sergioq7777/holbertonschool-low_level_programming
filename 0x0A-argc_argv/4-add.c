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
	int i, x, y = 0;

	if (argc < 2)
	{
		printf("0");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0 ; argv[i][x] != '\0' ; x++)
			{
				if (argv[i][x] < 47 || argv[i][x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			y = y + (atoi(argv[i]));
		}
		printf("%d\n", y);
		return (0);
	}
}
