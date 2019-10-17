#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - len of each elemento of my big array.
 * @str: My string
 * Return: My len.
 */
int str(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	return (x);
}
/**
 * argstostr - reply argc and argv function.
 * @ac: My arguments.
 * @av: My array of arrays.
 * Return: My pointer for my string.
 */
char *argstostr(int ac, char **av)
{
	char *add;
	int x, addition, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	addition = 0;
	for (x = 0; x < ac; x++)
	{
		addition  += str(av[x]);
	}
	add = malloc((addition + ac + 1) * sizeof(char));
	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	addition = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			add[addition] = av[j][k];
			addition++;
		}
		add[addition] = '\n';
		addition++;
	}
	return (add);
}
