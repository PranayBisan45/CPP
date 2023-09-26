#include<iostream>
using namespace std;
#include<string.h>

class string1{
	int len;
	char* ptr;
	public:
		string1 (char*);
		void stringDisplay();
		~String1();
};
string1::string1(char* sptr){
	len=strlen(sptr);
	ptr=new char*(len+1);
	strcpy(ptr,sptr);
}
void string1::stringDisplay() {
	cout<<"The lkength is"<<len<,endl;
	cout<<"String is "<<ptr<<endl;
}

string1::
int main(){
	String1 c1("rahul");
	
}
