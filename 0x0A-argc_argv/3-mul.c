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
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (argc == 3)
			{
				mul = mul * atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
