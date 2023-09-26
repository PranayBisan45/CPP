// shape 
// --> rectangle
// --> square

#include<iostream>
using namespace std;

class shape
{
	
	
	public:
		
		virtual int findarea()=0;
		shape();
		
		
};

shape::shape()
{
	cout<<"inside the default of shape class"<<endl;
}

class rectangle : public shape
{
	int l,b,area;
	public:
		rectangle();
		rectangle(int, int);
		findarea();
		display();
	
};

rectangle::rectangle()
{
	cout<<"inside the default of rectangle class"<<endl;
}

rectangle::rectangle(int len,int bre)
{
	cout<<"Inside rectangle Para Constructor"<<endl;
	this->l=len;
	this->b=bre;
}

int rectangle::findarea()
{
	area=l*b;
	return area;
}

int rectangle::display()
{
	cout<<"are of rectangle is="<<area;
}


class square : public shape
{
	int s,area;
	public:
		square();
		square(int );
		findarea();
		int display();
	
	
};

square::square()
{
		cout<<"inside the default of square class"<<endl;
}

square::square(int side)
{
	cout<<"Inside square Para Constructor"<<endl;
	this->s=side;
}

int square::findarea()
{
	area=s*s;
	return area;
}

int square::display()
{
	cout<<"are of square is="<<area;
}



int main()
{
	shape *ptr=new square(5);
	cout<<"are of the square="<<ptr->findarea()<<endl;
	
	shape *ptr1=new rectangle(2,3);
	cout<<"are of the rectangle="<<ptr1->findarea()<<endl;
	
	
	
	
}
