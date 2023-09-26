#include <iostream>
using namespace std;
void sub(int*,int*,int*);

void sub(int* a,int* b,int*c) {
	* c= *a - *b;
	cout<<*c;
}

int main() {
	int p,q,r;
	p=20;
	q=10;
	sub(&p,&q,&r);
	return 0;
}

