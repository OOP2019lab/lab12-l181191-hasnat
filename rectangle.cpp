#include "rectangle.h"


rectangle::rectangle(float hei, float wid ,string col):shape (col,"rectangle") 
{
	height = hei;
	width = wid;
}


rectangle::~rectangle(void)
{cout << "~rectangle() called."<<endl; 
}

float rectangle::area()
{
	float sum;
	sum = height*width;
	return sum;
}