#include<iostream>
using namespace std;
int main(){
	int num,res=0,orgnum,rem;
	cout<<"Enter 3 digit number ";
	cin>>num;
	orgnum=num;
	while(orgnum!=0){
		rem=num%10;
		
		res=res+rem*rem*rem;
		num=num/10;
	}
	if(res == num){
		cout<<"num is armstrong number ";
	}
	else{
	
	
	cout<<"num is not armstrong number ";
}
}
