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
			if (i < 2)
			{
				printf("Error\n");
			}
			else
			{
				mul = mul * atoi(argv[i]);
				printf("%d\n", mul);
			}
		}
	}
	return (0);
}
