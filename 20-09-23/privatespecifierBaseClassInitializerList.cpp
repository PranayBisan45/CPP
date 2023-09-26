#include<iostream>
using namespace std;
class A{
	int a;
	public:
	A(){
		cout<<"default of A"<<endl;
	}
	A(int);
	void display();

};
A::A(int p){
	cout<<"paramaterized of A"<<endl;
	a = p;
	}
	void A::display(){
		cout<<a<<endl;
	}
class B: public A{
	int b;
	public:
		B(int, int);
		void display();	
};
B::B(int p, int q):A(p){
	cout<<"paramaterized of B"<<endl;
//	a = p;
	b = q;
	}
	void B::display(){
		A::display();
		cout<<b<<endl;
	}
int main(){
	B obj(10,20);
	obj.display();
}

/*
paramaterized of A
paramaterized of B
10
20
*/

