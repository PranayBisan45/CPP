#include<iostream>
using namespace std;
#include<string.h>

class String1{
	int len;
	char *ptr;
	public:
		String1(char *);
		void show();
		String1(char,int);
		String1(int);
		String1();
	
};
String1::String1(char* ptr1){
	len=strlen(ptr1);
	ptr=new char [len+1];
	strcpy(this->ptr,ptr1);
} 
String1::String1(char ch,int len){
	int i;
	this->len=len;
	ptr=new char[this->len+1];
	for(i=0;i<this->len;i++){
		ptr[i]=ch;
		cout<<ptr[i];
	}	
	ptr[i]='\0';
}
String1::String1(int len){
	this->len=len;
	ptr=new char[this->len+1];
	char ch[this->len+1];
	cout<<"\nEnter a string";
	cin>>ch;
	strcpy(ptr,ch);
}
String1::String1(){
	int len;
	cout<<"\nenter length";
	cin>>len;
	char ptr1[len+1];
	this->len=len;
	ptr=new char[this->len+1];
	cout<<"\nEnter string";
	cin>>ptr1;
	strcpy(ptr,ptr1);
}
void String1::show(){
	cout<<"String is "<<ptr<<endl;
	cout<<"Length is: "<<len<<endl;
}
int main(){
	String1 s1("cdac");
	s1.show();
	String1 s2('*',50);
	String1 s3(5);
	s3.show();
	String1 s4;
	s4.show();
	
}
