#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex(int,int);
	void display();
	
//	complex operator-();
	complex operator++();
	 complex operator++(int);
	 complex();
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

complex complex::operator++()//pre
{
	++this->real;//this->real=this->real + 1
	++this->img;
	return (*this);
}
complex complex::operator++(int)//post
{
	complex temp= (*this);
	++this->real;
	++this->img;
	return temp;
}
int main()
{
	complex c1(1,2);
	c1=++c1;//c2=c1.operator++()
	c1.display();
	

	complex c3(1,2);
	complex c4=c3++;//c4=c3.operator++(0);
	c3.display();
	c4.display();

}
