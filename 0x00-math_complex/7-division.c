#include "holberton.h"

double pow2(double base)
{
	return base * base;
}
/**
 */
void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re;
	double b = c1.im;
	double c = c2.re;
	double d = c2.im;
	
	c3->re = ((a * c) + (b * d)) / (pow2(c) + pow2(d));
	c3->im = ((b * c) - (a * d)) / (pow2(c) + pow2(d));
}
