#include "heron.h"

/**
 * add_node - adds node to l_list
 * @head: head of list
 * @num: num of new obj
 * Return: void
 */
void add_node(t_cell **head, double num)
{
	t_cell *new;

	new = malloc(sizeof(t_cell));
	new->next = *head;
	new->elt = num;
	*head = new;
}
/**
 * heron - sequence
 * @p: sqrt(p)
 * @x0: first num of iter
 * Return: l_list of iterations
 */
t_cell *heron(double p, double x0)
{
	double i;
	t_cell *out = NULL;

	for (i = x0; (i * i) != p; i = 0.5 * (i + (p / i)))
		add_node(&out, i);
	return (out);
}
