#include <iostream>
using namespace std;
class Student
{
	int rollno,m1,m2;
	public:
		Student()
		{
			int m1=0;
			int m2=0;
		}
		Student(int x,int y)
		{
			this->m1=x;
			this->m2=y;
		}
};
class Sports
{
	int sm;
	public:
		Sports()
		{
			int sm=0;
		}
		Sports(int p)
		{
			this->sm=p;
		}
};
class Result:public Student,public Sports
{
	float Avg,Total;
	public:
		Result()
		{
//			cout<<"Enter marks 1: "<<endl;
//			cin>>m1;
//			cout<<"Enter marks 2: "<<endl;
//			cin>>m2;
			Total=Student::Student(int x,int y) + Sports::Sports(int p);
			Avg=Total / 3;
			cout<<"Avg is: "<<Avg;
		}
};
int main()
{
	Student S1(10,20);
	Sports Sp1(15);
	Result R1();
}
