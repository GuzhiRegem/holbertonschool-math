#include "heron.h"

/**
 * heron - sequence
 * @p: sqrt(p)
 * @x0: first num of iter
 * Return: l_list of iterations
 */
t_cell *heron(double p, double x0)
{
	t_cell *new, *head = malloc(sizeof(t_cell));
	double val, err = 0.0000001;

	head->elt = x0;
	while (1)
	{
		val = 0.5*(head->elt + (p / head->elt));
		if ((head->elt - err <= val) && (head->elt + err >= val))
			break;
		new = malloc(sizeof(t_cell));
		new->elt = val;
		new->next = head;
		head = new;
	}
	return (head);
}
