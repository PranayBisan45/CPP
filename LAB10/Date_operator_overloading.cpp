#include <iostream>
using namespace std;
class Date
{
	int date;
	int month;
	int year;
	public:
	Date(int d,int m,int y)
	{
		this->date=d;
		this->month=m;
		this->year=y;	
	}	
	void Display()
	{
		cout<<date<<"/"<<month<<"/"<<year<<endl;
	}
	friend void operator +(Date&,int);
	friend void operator -(Date&,int);
};

void operator+(Date& a,int z)
{
	a.date=a.date+z;
	a.month=a.month+3;
	a.year=a.year+9;
	cout<<a.date<<"/"<<a.month<<"/"<<a.year<<endl;
}

void operator-(Date&b,int y)
{
	b.date=b.date-y;
	b.month=b.month-2;
	b.year=b.year-6;
 }
 
 int main()
 {
 	int dd;
 	int mm;
 	int yy;
 	cout<<"Enter date"<<endl;
 	cin>>dd;
 	cout<<"Enter month"<<endl;
 	cin>>mm;
 	cout<<"Enter year"<<endl;
 	cin>>yy;
 	
 	Date D(dd,mm,yy);
 	D.Display();
   	D+2;
   	Date D1(dd,mm,yy);
   	D1-5;
   	D1.Display();
	} 
