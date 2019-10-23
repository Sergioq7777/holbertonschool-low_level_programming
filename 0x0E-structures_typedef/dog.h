#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog object
 * @name: name
 * @age: float
 * @owner: owner
 * Description: characteristics for dog
 **/

typedef struct dog
{
	char *name;
	float  age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
