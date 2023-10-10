#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialise a variable
 *@d: points to location of struct dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
