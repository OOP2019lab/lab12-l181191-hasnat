#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

float sumArea(shape A, shape B)
{
	float sum = A.area() + B.area();
	return sum;
}

int main()
{
	string col;
	triangle t1(1.0,9.0, "Red");
    circle c1(2, "Blue");
    rectangle r1(6,2, "Orange");
	cout << t1.area();
    cout<<t1.colour;
    cout<<c1.area();
    cout<<r1.area();
 
    shape *sptr= &t1;
    shape &sref=r1;
    cout<< sptr->area();
   /* cout << sptr->colour;
    cout << sref.colour;*/
    cout<< sref.area();


	int count= 5;
  shape**Array= new shape*[5];
  for(int i=0; i<count;)
{
  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle.";
	switch(getch())
	{
	case '1':
		int h, w;
		cout << "\nEnter Height:";
		cin >> h;
		cout << "\n Enter Width:";
		cin >> w;
		cout << "\nEnter colour:";
		cin >> col;
	    Array[i]=new triangle(w,h,col);

		i++;
		break;

	case '2':
		int a , b;
		cout << "\nEnter Height:";
		cin >> a;
		cout << "\n Enter Width:";
		cin >> b;
		cout << "\nEnter colour:";
		cin >> col;

		Array[i] = new rectangle(a,b,col);
		i++;
		break;

	case '3':
		int r;
		cout << "Enter Radius:";
		cin >> r;
		cout << "\nEnter colour:";
		cin >> col;

		Array[i]= new circle(r,col);
		i++;
		break;
	default:
		cout<<"Invalid input. Enter again." <<endl<<endl;
		break;
	}
	

	shape *s1= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
    delete s1; //identify which destructor in invoked


	system ("pause");
}
