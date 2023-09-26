#include <iostream>
using namespace std;
int swap(int&,int&);

int swap(int &a,int &b) {
	int temp=a;
	a=b;
	b=temp;
	cout<<"after swapping the value of a and b is "<<a<<" "<<b<<endl;
}

int main() {
	int p,q;
	cout<<"Enter two numbers"<<endl;
	cin>>p>>q;
	cout<<"The value of p and q before swapping is "<<p<<" "<<q<<endl;
	swap(p,q);
	cout<<"The value of p and q after swapping is "<<p<<" "<<q<<endl;
	return 0;
}

