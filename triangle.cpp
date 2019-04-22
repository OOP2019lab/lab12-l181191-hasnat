#include "triangle.h"


triangle::triangle(float num, float n,string col): shape (col , "triangle")
{
	base = num;
	height = n;
}


triangle::~triangle(void)
{
	cout <<  "~ triangle () called.";
}

float triangle::area()
{
	float sum;
	sum = 0.5*base*height;
	return sum;
}