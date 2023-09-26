#include<iostream>
using namespace std;
class A{
	int a ;
	public:
		A(){
			cout<<"default of A"<<endl;
		}
		A(int a){
			cout<<"paramaterized of A"<<endl;
			this->a = a;
			cout<<a<<endl;
		}
		void display(){
			cout<<"in display of a"<<endl;
			cout<<a<<endl;
		}
};
class B:public A{
	int b;
	public:
	B(){
		cout<<"default of B"<<endl;
	}
	B(int b):A(50){ //base class initialization using :)
		cout<<"Paramaterized of B"<<endl;
		this->b = b; 
		cout<<b<<endl;
	}
	void display(){
		A::display();
		cout<<"in display of b"<<endl;
		cout<<b<<endl;
	}
};

int main(){
	
	B obj;
	obj.display();
	B obj1(100);
	obj1.display();
	cout<<"sizeof A is :"<<sizeof(A)<<endl;
	cout<<"sizeof B is :"<<sizeof(B);
}

/*
default of A
default of B
in display of a
0
in display of b
0
paramaterized of A
50
Paramaterized of B
100
in display of a
50
in display of b
100
sizeof A is :4
sizeof B is :8
*/
