#include <iostream>
using namespace std;

int main() {
	int num,i;
	int cnt=0;
	for(num=2;num<=50;num++){
		for(i=2;i<num/2;i++){
			if(num%i==0){
				break;
			}
		}
		if(cnt==0)
		cout<<num<<endl;
	}
	
	
}
