#include<iostream>
#include<string.h>
using namespace std;
class Date{
	int dd,mm,yy;
	public:
		void get(){
			cout<<"Enter Date : "<<endl;
			cin>>dd>>mm>>yy;
		}
		void displayDate(){
			cout<<"Date is : "<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
class Student{
	int rollno;
	char name[10];
	Date d;
	public:
		void get(){
			cout<<"Enter Roll no : "<<endl;
			cin>>rollno;
			cout<<"Enter Name : "<<endl;
			cin>>name;
			d.get();
		}
		void display(){
			cout<<"Roll no : "<<rollno<<endl;
			cout<<"Name is : "<<name<<endl;
			d.displayDate();
		}
		void setRollNo(int r){
			rollno = r;
		}
		void setName(char* n){
			strcpy(name,n);
		}
		int getRollNo(){
			return rollno;
		}
		char* getName(){
			return name;
		}
};
int main(){
	Student s[10],temp;
	int i,j;
	int n;
	cout<<"Enter number of Students : "<<endl;
	cin>>n;
	for( i =0;i<n;i++){
		s[i].get();
	}
	for(int i =0;i<n;i++){
		s[i].display();
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i].getRollNo() > s[j].getRollNo()){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	cout<<"Sorted Data : "<<endl;
	for(i=0;i<n;i++){
		s[i].display();
	}
}
