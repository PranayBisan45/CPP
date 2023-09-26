#include<iostream>
using namespace std;
#include<string.h>

class Student {
	int roll;
	char Name[20];
	double fees;
	public:
		Student(int,char*,double);
		void show();
		Student(Student&);
};

Student::Student(int r, char* n,double f) {
	roll = r;
	strcpy(Name,n);
	fees = f;
}

void Student::show() {
	cout<<"The name of the student is: "<<Name<<endl;
	cout<<"The roll no is : "<<roll<<endl;
	cout<<"Fees is: "<<fees<<endl;
}

Student::Student(Student& Student_new) {
	strcpy(Name,Student_new.Name);
	// roll = Student_new.roll;
	roll = 3;
	fees = 20000; 
}

int main() {
	Student s(73,"Pranay",100000);
	Student s1(s);
	s.show();
	s1.show();
	return 0;
}
