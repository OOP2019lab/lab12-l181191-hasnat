#pragma once
#include <iostream>
#include <string>

using namespace std;

class shape
{
	string type;
public:
	shape(string , string);
	shape(string col)
	{colour = col;}
	~shape(void);
	virtual float area();
	string colour;
	string color()
	{
		return colour;
	}
};

