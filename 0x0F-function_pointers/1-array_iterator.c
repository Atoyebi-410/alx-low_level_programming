
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - this function executes a function on array
 * @array: this is a pointer to array
 * @size: this is number elements in array
 * @action: this is pointer to function
 * Return: 0
 **/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
