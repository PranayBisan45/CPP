#include<iostream>
using namespace std;

class date{
	int dd,mm,yy;
	public:
		date(int,int,int);
		void show();
		date(date &);
};
date::date(int d,int m,int y ){
	dd=d;
	mm=m;
	yy=y;
}
void date::show(){
	cout<<"date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date &date_new){
	dd=date_new.dd;
	mm=5;
	yy=18;
}
int main(){
	date d(8,8,17);
	date d1(d);
	d.show();
	d1.show();
	
}
