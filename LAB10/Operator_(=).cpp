#include <iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
	void display();
		string1(char*);
		string1& operator=(string1&);
//		string(string&)
//		{
//			cout<<"Copy constructor is called"<<endl;	
//		}	
};
string1& string1::operator=(string1& s)
{
	cout<<"assignment is called\n";
	len=s.len;
	delete[] ptr;
	ptr=new char[len+1];
	strcpy(ptr,s.ptr);
	return (*this);
}
void string1::display()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}	

int main()
{


	string1 s1("abc");
	string1 s2("xyz");


	s2=s1;
	s2.display();
	
	string1 s5=s2;

}
