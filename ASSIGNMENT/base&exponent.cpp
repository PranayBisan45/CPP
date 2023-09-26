
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	double x , y;
	cout<<"Enter x and y: ";
	cin>>x>>y;

	// Storing the answer in result.
	double result = pow(x, y);
	cout<<result;

	return 0;
}

