#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>


typedef struct listin_s
{
	int n;
	struct listin_s *next;
} listin_t;

size_t print_listint(const listint_t *h);
listin_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
