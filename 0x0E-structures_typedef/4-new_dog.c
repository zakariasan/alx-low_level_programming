#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creat new dog
 * @name: name
 * @age: age
 * @owner:owner
 *
 * Description:  function that creates a new dog.
 * Return: dog_t type or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (!n_dog)
		return (NULL);

	n_dog->name = malloc(sizeof(n_dog->name));
	if (!n_dog->name)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = malloc(sizeof(n_dog->owner));
	if (!n_dog->owner)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = owner;
	return (n_dog);
}
