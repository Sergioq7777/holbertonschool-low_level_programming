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
	int change, coins, i = 0;
	char denom[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("0\n");
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
			y +=  atoi(argv[i]);
		}
		printf("%d\n", y);
		return (0);
	}
}
