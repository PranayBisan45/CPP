#include<iostream>
using namespace std;
#include<string.h>

class student{
	int roll;
	char name[20];
	double fees;
	public:
		student(int,char*,double);
		void show();
		student(student&);
};
student::student(int r,char* n,double f){
	roll=r;
	strcpy(name,n);
	fees=f;
}
void student::show(){
	cout<<"Roll No is: "<<roll<<" "<<"Name is: "<<name<<" "<<"Fees is: "<<fees<<endl;
}
student::student(student &student_new){
	roll=student_new.roll;
	strcpy(name,student_new.name);
	fees=student_new.fees;
}

int main(){
	student s(14,"Dnyanendra",10000);
	student s1(s);
	s.show();
	s1.show();
}
