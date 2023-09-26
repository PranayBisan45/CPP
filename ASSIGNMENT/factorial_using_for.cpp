#include <iostream>
using namespace std;

int main()
{
	int fact=1,i,n;
	cout<<"Enter number: ";
	cin>>n;
	for(i=1;i<=n;i++) {
		fact = fact * i;
	}
	cout<<"Factorial of "<<n<<" numbers is "<<fact<<endl;
}
