#include "rectangle.h"
#include <stdio.h>

double function(double x, double dx)
{
	return (dx / (1 + (x * x)));
}

double rectangle_method(double a, double b, int steps)
{
	double step_size = (b - a)/steps;
	double actual_step = a, out = 0.0;

	while (actual_step < b)
	{
		out += function(actual_step, step_size);
		actual_step += step_size;
	}
	return (out);
}
