#ifndef DOG
#define DOG

/**
 * struct dog - dog object
 * @name: name
 * @age: float
 * @owner: owner
 * Description: characteristics for dog
 **/

struct dog
{
	char *name;
	float  age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
<<<<<<< HEAD
=======
typedef struct dog dog_t;
>>>>>>> bb4c20e51c913fa735d041d6e88d54626740e945
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
