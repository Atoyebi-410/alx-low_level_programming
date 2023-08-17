#include <stdio.h>
#include "variadic_functions.h"

/**
 *  print_numbers - this prints out numbers given
 * @separator: the string to be seperated between numbers
 * @n: the number of arguments
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
