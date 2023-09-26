#include <iostream>
using namespace std;

int main() {
	int ptr1[4];
	int *ptr2[4];
	cout<<"Enter 4 numbers"<<endl;
	for(int i=0;i<4;i++) {
		cin>>ptr1[i];
	}
	for(int i=0;i<4;i++) {
		ptr2[i]=&ptr1[i];
	}
		cout<<"Output:"<<endl;
	for(int j=0;j<4;j++) {
		cout<<*ptr2[j]<<endl;
	}
	return 0;	
}
