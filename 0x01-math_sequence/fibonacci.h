#ifndef FIB
#define FIB

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct s_cell {
	double elt;
	struct s_cell *next;
} t_cell;

#endif
