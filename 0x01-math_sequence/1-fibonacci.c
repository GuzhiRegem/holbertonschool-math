#include "fibonacci.h"

/**
 * add_node - add node
 * @list: list
 * @num: num
 * Return: list
 */
void add_node(t_cell **list, int num)
{
	t_cell *new;

	new = malloc(sizeof(t_cell));
	new->elt = num;
	new->next = *list;
	*list = new;
}

/**
 * Fibonnaci - .
 * Return: l_list
 */
t_cell *Fibonnaci()
{
	t_cell *out = NULL;
	int i;

	add_node(&out, 1);
	add_node(&out, 1);
	for (i = 0; i < 18; i++)
	{
		add_node(&out, out->elt + out->next->elt);
	}
	return (out);
}

/**
 * gold_number
 * @head: head of list
 * Return: double
 */
double gold_number(t_cell *head)
{
	double a, b;

	a = (double) head->elt;
	b = (double) head->next->elt;
	return (a / b);
}
