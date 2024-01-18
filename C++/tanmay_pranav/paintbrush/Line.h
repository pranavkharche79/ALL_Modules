#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include "Point.h"
class Line : public Shape,Point
{
	public:
		Line(int,int,int);
		~Line();
		 void Display();
	protected:
		int startPoint, endPoint;
};

#endif
