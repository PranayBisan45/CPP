//Implement Inline functions in your program

#include <iostream>
using namespace std;
int addition(int,int);
int substraction(int,int);

inline int addition(int a,int b) {
	int c=a+b;
	cout<<"Addition is: "<<c<<endl;
}

inline int substraction(int a,int b) {
	int c=a-b;
	cout<<"Substraction is: "<<c<<endl;
}

int main() {
	int p,q;
	cout<<"Enter two numbers"<<endl;
	cin>>p>>q;
	addition(p,q);
	substraction(p,q);
	return 0;
}
