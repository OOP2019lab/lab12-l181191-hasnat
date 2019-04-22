#pragma once
#include "shape.h"


class circle: public shape
{
	float radius;
public:
	circle(float, string);
	~circle(void);
	float area();
	
};

