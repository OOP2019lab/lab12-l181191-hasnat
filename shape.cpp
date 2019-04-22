#include "shape.h"


shape::shape(string col , string typ)
{
	colour = col;
	type= typ;
}


shape::~shape(void)
{
	 cout << "~shape() called."<<endl;
}

float shape::area()
{
	cout << "0.0";
	return 0;
}

