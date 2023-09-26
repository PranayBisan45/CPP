#include<iostream>
using namespace std;


class Student{
	int m1,m2,rollno;
	public:
		Student()
		{
			cout<<"Enter Roll No: ";
			cin>>rollno;
			cout<<"Enter Mark 1:  ";
			cin>>m1;
			cout<<"Enter MArk 2: ";
			cin>>m2;
		}
		int sum_std()
		{
			return m1+m2;
		}
		
};

class Sports
{
	int sprt;
	public:
		Sport()
		{
			cout<<"Enter Sport Mark: ";
			cin>>sprt;			
		}	
		int s_sprt(){
			return sprt;
		}
};



class Result : public Student, public Sports
{	
	public :
	float avg;
	int Total;
	void display()
		{	
			Total=Student::sum_std()+ Sports::s_sprt();
			cout<<"Total marks of students: "<<Total<<"\n";
			avg=(float)Total/3;
			cout<<"Average Marks Of Student: "<<avg;
		}
};
int main()
{
	Result R1;
	R1.display();
 } 
