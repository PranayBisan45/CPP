#include<iostream>
using namespace std;
class employee{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{
			cout<<"100"<<endl;
		}
};
employee::employee(){
	cout<<"in default of emp.\n";
	id=0;
}
employee::employee(int i){
	cout<<"In default of para.\n";
	id=i;
}
void employee::display(){
	cout<<"Id of Employee is: "<<id<<endl;
}

class wageemployee:public employee {
	
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
		
};
wageemployee::wageemployee(){
	cout<<"in default of wage employee.\n";
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(i)
{
	hrs=h;
	rate=r;
}
void wageemployee::display(){
	employee::display();
	cout<<endl;
	cout<<"hrs= "<<hrs<<endl;
	cout<<"rate= "<<rate<<endl;
}
int wageemployee::findsalary(){
	return hrs * rate;
}
class salesmanager:public wageemployee{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};
salesmanager::salesmanager(){
	cout<<"in default of sales.\n ";
	sales=0;comm=0;
	
};
salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	sales=s;
	comm=c;
	
};
int salesmanager::findsalary(){
	return (wageemployee::findsalary()) + (sales * comm);
}
void salesmanager::display(){
	wageemployee::display();
	cout<<"sales is : "<<sales<<endl;
	cout<<"commission is : "<<comm<<endl;
	cout<<"Salary : "<<findsalary();
};

int main(){
	employee * ptr = new employee();
	ptr->findsalary();
	ptr=new wageemployee();
	ptr->findsalary();
	ptr= new salesmanager();
	ptr->findsalary();
	
	
}

