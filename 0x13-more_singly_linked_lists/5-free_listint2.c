#include "lists.h"


/**
 * free_listint2 - this frees a list
 * @head: Address of the first node of a list.
 **/


void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
