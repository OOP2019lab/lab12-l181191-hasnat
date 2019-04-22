#pragma once
#include "shape.h"

class rectangle: public shape
{
	float height;
	float width;
public:
	rectangle(float , float, string);
	~rectangle(void);
	float area();
};

