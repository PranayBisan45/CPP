//for loop
#include<iostream>
using namespace std;
int main(){
	int num;
	int sum=0;
	cout<<"Enter a positive number: ";
	cin>>num;
	for(int i = 1; i <= num; i++){
		sum=sum+i;
	}
	cout<<"Sum Is: "<<sum;
}