#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: pointer to string name
 * @age: float dog age
 * @owner: pointer to dog owner
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int lname, lowner, i;

	dog1 = malloc(sizeof(*dog1));
	if (dog1 == NULL || !(name) || !(owner))
	{
		free(dog1);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owner[lowner]; lowner++)
		;

	dog1->name = malloc(lname + 1);
	dog1->owner = malloc(lowner + 1);

	if (!(dog1->name) || !(dog1->owner))
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		dog1->name[i] = name[i];
	dog1->name[i] = '\0';

	dog1->age = age;

	for (i = 0; i < lowner; i++)
		dog1->owner[i] = owner[i];
	dog1->owner[i] = '\0';

	return (dog1);
}
