#include<iostream>
using namespace std;
class Shape{
	int thickness;
	public:
		display();
};
class Point
{ 
	public:
		int x,y;
	Point()
	{
		this->x=0;
		this->y=0;
	}
	Point(int p,int q)
	{
		this->x=p;
		this->y=q;
	}
	void display()
	{
		cout<<"X cordinate is: "<<x;
		cout<<"Y cordinate is: "<<y;
		cout<<"("<<x<<","<<y<<")";
	}
};
class Circle:public Shape
{
	float r,area;
	const float pi=3.142f;
	Point center;
	public:
		Circle()
		{
			
		}
		circle(float r,Point c)
		{
			this->r=r;
			this->center=c; 
			area=pi*r*r;
		}
		void display()
		{
			cout<<"Area of circle: "<<area<<endl;
		}
};
class line:public Shape
{
	Point x,y;
	public:
		
	line()
	{
		this->x.x=0;
		this->y.y=0;
	}
	line(int p,int q)
	{
		this->x.x=p;
		this->y.y=q;
	}
	void display()
	{
		cout<<"Startpoint of line is: "<<x.x<<endl;
		cout<<"Endpoint of line is: "<<y.y<<end;
	}
};
class Rectangle:public Shape
{
	int length,breadth;
	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;	
		}
		int area=length*breadth;
		void display()
		{
			cout<<"Area of a Reactangle is: "<<area<<endl;
		}
};
class Square:public Shape
{
	int side;
	public:
		Sqaure()
		{
			side=0;
		}
		Square(int s)
		{
			side=s;
		}
		area=side*side;
		void display()
		{
			cout<<"Area of Square is: "<<area<<endl;
		}
};
class Ellipse:public Shape
{
	int l,h;
	Point c;
};


int main
{
	line l1();
	line l2(2,3);
	l2.display();
	
}
