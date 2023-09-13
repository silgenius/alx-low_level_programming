#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with specified values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a character array representing the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
