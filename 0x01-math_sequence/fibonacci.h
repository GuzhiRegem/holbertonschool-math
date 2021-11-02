#ifndef FIB
#define FIB

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct s_cell {
	int elt;
	struct s_cell *next;
} t_cell;
t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
