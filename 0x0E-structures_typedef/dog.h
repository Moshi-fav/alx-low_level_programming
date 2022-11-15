#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - new struct for storing dog variables
 * @name: string pointer for name
 * @age: float age
 * @owner: string pointer storing owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif

