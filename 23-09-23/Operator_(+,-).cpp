#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex()
		{
			real=0;
			img=0;
		}
		
		Complex(int r,int i)
		{
			this->real=r;
			this->img=i;
		}
		
		void Display()
		{
			if(img>0)
			cout<<"Complex No is: "<<real<<"+"<<img<<"i"<<endl;
			else
			cout<<"Complex No is: "<<real<<img<<"i"<<endl;
		}
		
		Complex operator+(Complex &c)
		{
			Complex Temp;
			Temp.real=this->real+c.real;
			Temp.img=this->img+c.img;
			return Temp;
		}
		Complex operator-(Complex &c)
		{
			Complex Temp;
			Temp.real=this->real-c.real;
			Temp.img=this->img-c.img;
			return Temp;	
		}
		Complex operator-()
		{
			Complex Temp;
			Temp.real=-this->real;
			Temp.img=-this->img;
			return Temp;
		}
};
int main()
{
	Complex C1(10,20);
	Complex C2(30,-40);
	Complex C3;
	C3=C1+C2;
	C3.Display();
	Complex C4;
	C4=C2-C1;
	C4.Display();
	
	Complex C5(12,13);
	Complex C6;
	C6=-C5;
	C6.Display();#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:

	Complex()
	{
		real=0;
		img=0;
	}
	Complex(int r,int i)
	{
		this->real=r;
		this->img=i;
	}
	void Display()
	{
		if(img>0)
		cout<<"Complex No is: "<<real<<"+"<<img<<"i"<<endl;
		else
		cout<<"Complex No is: "<<real<<img<<"i"<<endl;
	}
	Complex operator++()
}
	
	
}
