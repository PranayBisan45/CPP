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
	a.month=a.month+z;
	a.year=a.year+z;
	cout<<a.date<<"/"<<a.month<<"/"<<a.year<<endl;
}

void operator-(Date&b,int y)
{
	b.date=b.date-y;
	b.month=b.month-y;
	b.year=b.year-y;
 }
 
class Time
{
	int hr,min,sec;
	public:
		Time(int h,int m,int s)
		{
			this->hr=h;
			this->min=m;
			this->sec=s;
		}
		void isplay()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		friend void operator +(Time &,int);
		friend void operator -(Time &,int);
	};
		void operator +(Time &h,int g)
		{
			h.hr=h.hr+g;
			h.min=h.min+g;
			h.sec=h.sec+g;
			cout<<h.hr<<":"<<h.min<<":"<<h.sec<<endl;
		}
		void operator -(Time &k,int l)
		{
			k.hr=k.hr-l;
			k.min=k.min-l;
			k.sec=k.sec-l;
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
 	
 	cout<<endl;
 	
 	int hh,mi,ss;
 	cout<<"Enter Hour"<<endl;
 	cin>>hh;
 	cout<<"Enter Min"<<endl;
 	cin>>mi;
 	cout<<"Enter Sec"<<endl;
 	cin>>ss;
 	
 	Date D(dd,mm,yy);
 	D.Display();
   	D+2;
   	Date D1(dd,mm,yy);
   	D1-5;
   	D1.Display();
   	
   	Time T(hh,mi,ss);
   	T.isplay();
   	T+4;
   	Time T1(hh,mi,ss);
   	T1-3;
  	T1.isplay();
	} 
