#include "dog.h"

/**
 * init_dog - initializing dog
 * @d: the initializiation values
 * @name: new name
 * @age: new age
 * @owner: new owner
 *
 *return: void.
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
