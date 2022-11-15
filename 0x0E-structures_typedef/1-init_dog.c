#include "dog.h"

/**
 * init_dog - initializes dog struct
 * @d: pointer to stuct to initialize
 * @name: pointer to name
 * @age: float value of age
 * @owner: pointer to owner char array
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
