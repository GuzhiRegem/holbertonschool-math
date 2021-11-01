#include "holberton.h"

/**
 */
void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = sin(arg) * m;
	c3->im = cos(arg) * m;
}
