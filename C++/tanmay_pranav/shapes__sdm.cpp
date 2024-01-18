#include<iostream>
#include<math.h>
using namespace std;
const float pi=3.14f;

class Shape
{
	
	int thikness;
	public:
		void getData()
		{
			cout<<"enter thikness = \n";
			cin>>thikness;
		}
		
};

class Point
{
	int xcor;
	int ycor;
	public:
		void getData()
		{
			cout<<"Enter X cordinate = \n";
			cin>>xcor;
			cout<<"Enter Y cordinate = \n";
			cin>>ycor;
			
		}
		void Show()
		{
			cout<<"Point is:"<<"("<<xcor<<","<<ycor<<")"<<endl;
		}
};
class line :public Point,Shape
{
	public:
		void getline()
		{
		Shape::getData();
		cout<<"starting pt :"<<endl;
		Point::getData();
		Point::Show();
		cout<<"end pt :"<<endl;
		Point::getData();
		Point::Show();
		
		}
};
class Square:public Shape{
	int side;
	public :
		void showArea(){
			Shape::getData();
			cout<<"enter side of square"<<endl;
			cin>>side;
			cout <<"area of square is "<<side*side<<endl;
		}
};
class Rectangle:public Shape
{
	int len;
	int breadth;
	public :
		void showArea(){
			Shape::getData();
			cout<<"enter length of Rectangle"<<endl;
			cin>>len;
			cout<<"enter breadth of Rectangle"<<endl;
			cin>>breadth;
			cout <<"area of Rectangle is "<<len*breadth<<endl;
		}
};

class Ellipse:public Shape,Point
{
	int length;
	int height;
	public:
	void getellipse()
		{
		Shape::getData();
		cout<<"enter center point :"<<endl;
		Point::getData();
		Point::Show();
		cout<<"Enter length ellipse :"<<endl;
		cin>>length;
		cout<<"Enter height ellipse :"<<endl;
		cin>>height;
		cout<<"Area of ellipse= "<<pi*length*height<<endl;
		}
};

class Circle:public Shape,Point
{
	int radius;
	public:
		void getcircle()
		{
			Shape::getData();
			cout<<"enter center point :"<<endl;
			Point::getData();
			Point::Show();
			cout<<"Enter radius of circle: "<<endl;
			cin>>radius;
			cout<<"Area of circle : "<<pi*radius*radius<<endl;
		}
};


int main()
{
	int x;
	cout <<"Enter 1 for Line\nEnter 2 for Rectangle\nEnter 3 for Square\nEnter 4 for Ellipse\nEnter 5 for Circle\nEnter 6 for Exit\n ";
	cin>>x;
	switch(x)
	{
		case 1:line l1;
				l1.getline();
				break;
		case 2:Rectangle r1;
				r1.showArea();
				break;
		case 3:Square s1;
				s1.showArea();
				break;
		case 4:Ellipse e1;
				e1.getellipse();
				break;
		case 5:Circle c1;
				c1.getcircle();
				break;
		case 6:break;
		default:cout<<"Enter valid input!";
	}	
	return 0;
}


