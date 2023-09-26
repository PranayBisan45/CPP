#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"In default constructor of A"<<endl;
	}
	~A()
	{
		cout<<"In default destructor of A"<<endl;
	}
};
class B:public A
{
	public:
	B()
	{
		cout<<"In default constructor of B"<<endl;
	}
	~B()
	{
		cout<<"In default destructor of B"<<endl;
	}
};
class C:public A
{
	public:
	C()
	{
		cout<<"In default constructor of C"<<endl;
	}
	~C()
	{
		cout<<"In default destructor of C"<<endl;
	}
};
int main()
{
	A obj1;
//	obj1.~A();
	B obj2;
//	obj2.~B();
	C obj3;
	
}
