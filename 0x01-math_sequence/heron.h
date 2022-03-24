#ifndef HERON
#define HERON

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct s_cell {
	double elt;
	struct s_cell *next;
} t_cell;
t_cell *heron(double p, double x0);

#endif
