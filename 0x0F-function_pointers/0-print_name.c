#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: this is a pointer to char
 * @f: this is pointer to function that returns nothing
 * Return: 0
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
