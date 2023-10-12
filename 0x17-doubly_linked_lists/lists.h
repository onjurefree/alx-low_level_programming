#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dlistint_s - doubly linked list
* @n: interger
* @prev: points to the previous node
* @next: pointers to the next node
*
* Description: doubly linked list node structure
* for Holberton project
*/
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **lead, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **l, unsigned int idx, int n);
int sum_dlistint(dlistint_t *lead);
dlistint_t *get_dnodeint_at_index(dlistint_t *lead, unsigned int index);
void free_dlistint(dlistint_t *lead);
dlistint_t *add_dnodeint_end(dlistint_t **lead, const int n);
dlistint_t *add_dnodeint(dlistint_t **lead, const int n);
size_t dlistint_len(const dlistint_t *l);
size_t print_dlistint(const dlistint_t *l);

#endif
