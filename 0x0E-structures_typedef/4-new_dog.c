#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *
 * countmause - Count string
 *
 * @str: String
 * return: pointer
 *
 */


void *countmause(char *str)
{
	int n;
	char *i;

	for (n = 0; str[n] != '\0'; i++);

	i = malloc(n + 1);
	if (i == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		i[n] = str[n];
	i[n] = '\0';

	return (i);
}

/**
 * new_dog - Write a function that creates a new dog.
 *
 * @name: variable 2
 * @age: variable 3
 * @owner: variable 4
 *
 *Return: pointer
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *copycat1, *copycat2;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	copycat1 = countmause(name);
	if (copycat1 == NULL)
	{
		free(p);
		return (NULL);
	}

	copycat2 = countmause(owner);
	if (copycat2 == NULL)
	{
		free(p);
		free(copycat1);
		return (NULL);
	}

	p->name = copycat1;
	p->age = age;
	p->owner = copycat2;
	return (p);
}
