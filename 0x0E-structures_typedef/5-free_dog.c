#include "dog.h"
#include <stdio.h>
/**
 * free_dog - Initialize a variable of type struct dog.
 *@d: struct
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
