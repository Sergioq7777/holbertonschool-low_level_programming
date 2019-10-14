#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *@argc: int
 *@argv: char
 * Return: Always.
 */

int main(int argc, char *argv[])
{
	int x, num;

	if (argc == 0)
	{
		printf("0 \n");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (*argv[x] >= 48 && *argv[x] <= 57)
			{
				num = num + atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i \n", num);
	}
	return (0);
}
