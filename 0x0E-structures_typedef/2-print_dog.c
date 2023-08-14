#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dogs name
 * @d: struct source
 *
 * Description:  function that print dog struct
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	name = (d->name) ? d->name : "(nil)";
	age = (d->age) ? d->age : 0;
	owner = (d->owner) ? d->owner : "(nil)";
	if (d)
	{
		printf("Name: %s\n", name);
		age ? printf("Age: %f\n", age) : printf("Age: (nil)\n");
		printf("Owner: %s\n", owner);
	}
}
