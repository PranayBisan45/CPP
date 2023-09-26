#include<iostream>
using namespace std;
int main(){
	int m,n,sum=0;
	float avg;
	cout<<"No of subjects: ";
	cin>>m;
	cout<<"Enter no of characters: ";
	cin>>n;
	int* marks_m=new int[m];
	char* name_n=new char[n+1];
	for(int i=0;i<m;i++){
		cout<<"Enter marks: ";
		cin>>marks_m[i];
		sum=sum+marks_m[i];
	}
	avg=(float)sum/m;
	cout<<"Enter name of student: ";
	cin>>name_n;
	cout<<"Name is "<<name_n<<endl;
	cout<<"Average is: "<<avg<<endl;
	delete [] marks_m;
	delete [] name_n;
	cout<<name_n;
	
}
