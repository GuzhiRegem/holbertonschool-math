#include "holberton.h"

/**
 */
void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re;
	double b = c1.im;
	double c = c2.re;
	double d = c2.im;
	
	c3->re = ((a * c) + (b * d)) / (pow(c, 2) + pow(d, 2));
	c3->im = ((b * c) - (a * d)) / (pow(c, 2) + pow(d, 2));
}
