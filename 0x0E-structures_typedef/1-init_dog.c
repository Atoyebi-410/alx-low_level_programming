#include <stdlib.h>
#include "dog.h"



/**
 * init_dog - this is for initializing a variable of type struct dog
 * @d: this is for pointing to an element of type dog
 * @name: this is pointing to a character for name of dog
 * @age: this is for age of dog
 * @owner: this is for pointing to a character for owner of dog
 * Return: 0
 **/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
