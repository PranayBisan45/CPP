#include<iostream>
using namespace std;
int main(){
	int n,i=3;
	int n1=0,n2=1,n3;
	cout<<"Enter a number ";
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	while(i<=n){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		i++;
}
}

