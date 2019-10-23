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
<<<<<<< HEAD
void print_dog(struct dog *d);
<<<<<<< HEAD
=======
typedef struct dog dog_t;
>>>>>>> bb4c20e51c913fa735d041d6e88d54626740e945
=======
>>>>>>> de64d62f162287627817cbfd49e8f881bbfe29bf
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
