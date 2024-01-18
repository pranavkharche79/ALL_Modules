#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Point.h"
#include "Line.h"
const float pi=3.14f;
using namespace std;


int main(int argc, char** argv) {
	Line l1(21,3,4);
	l1.Display();
	Point p1(23,42);
	p1.Display();
	return 0;
}
