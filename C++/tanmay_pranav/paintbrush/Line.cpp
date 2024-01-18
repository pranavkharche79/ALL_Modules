#include "Line.h"
#include <iostream>
using namespace std;


Line::Line(int pt1,int pt2,int t):Shape(t)
{	
	this->startPoint=pt1;
	this->endPoint=pt2;
}

void Line::Display()
{
	cout<<"Line \n";
	cout<<"StartPoint = "<<startPoint<<endl;
//	this->startPoint.Display();
	cout<<"EndPoint = "<<endPoint<<endl;
//	this->endPoint.Display();
	cout<<"Thickness= "<<;
}

Line::~Line()
{
}
