#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - this is to print list of elements
 * @h: this is an input
 * Return: this return number of nodes
 */


size_t print_list(const list_t *h)
{
if (h)
{
if (h->str)
printf("[%d] %s%s", h->len, h->str, "\n");
else
printf("[%d] %s%s", 0, "(nil)", "\n");
if (h->next)
{
return (1 + print_list(h->next));
}
return (1);
}
return (0);
}
