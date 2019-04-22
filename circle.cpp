#include "circle.h"


circle::circle(float num, string col):shape(col,"circle")
{
	radius = num;
}


circle::~circle(void)
{cout << "~ circle () called."<<endl;
}

float circle::area()
{
	float sum;
	sum = 3.14 *radius*radius;
	return sum;
}

