#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Initialize a variable of type struct dog.
 *@name: char
 *@age: float
 *@owner: char
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;


	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
