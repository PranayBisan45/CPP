#include <iostream>
using namespace std;
template <class P>
P add(P &a, P &b)
{
	P result=a+b;
	return result;
}
int main()
{
	int i=2;
	int j=3;
	float c=4.3f;
	float d=5.6f;
	cout<<"Addition Of i and j: "<<add(i,j)<<endl;
	cout<<"Addition of c and d: "<<add(c,d);
}
