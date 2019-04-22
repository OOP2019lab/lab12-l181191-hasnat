#pragma once
#include "shape.h"

class triangle: public shape
{
	float base;
	float height;
public:
	triangle(float , float, string);
	~triangle(void);
	float area();
};

