#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - this prints a structure dog
 * @d: this serves as a pointer to an element of type dog
 * Return: 0
 **/


void print_dog(struct dog *d)

{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
