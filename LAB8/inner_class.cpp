#include <iostream>
using namespace std;

class A {
	public:
		class B{
			int num;
			public:
				void getData(int n) {
					num=n;
					//cout<<num;
				}
				void showData() {
					cout<<num;
				}
		};
};
int main() {
	A::B obj;
	obj.getData(35);
	obj.showData();
}
