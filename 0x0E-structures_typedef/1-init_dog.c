#include "dog.h"

/**
 * init_dog - init dog name
 * @d: struct source
 * @name: struct name
 * @age: age
 * @owner: owner
 *
 * Description:  function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
