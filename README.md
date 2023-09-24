# CPP


#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	int* p = new int[n];
	for(int i=0;i<n;i++)
	cin>>p[i];
	for(int i=0;i<n;i++){
	cout<<p[i];
	delete []p;
	return 0;
}






#include <iostream>
using namespace std;

int main() {
	int n;

	cout<<"Enter the size"<<endl;
	cin>>n;
	int ptr[n];
	
	for(int i=0;i<n;i++) {
	cin>> ptr[i];
	}
	for(int i=0;i<n;i++)
	cout<<ptr[i];
	return 0;
}
