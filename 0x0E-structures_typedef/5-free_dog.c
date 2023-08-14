#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it free dogs.
 * @d: this points to a dog of type dog_t
 * Return: 0
 **/


void free_dog(dog_t *d)

{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}


}
