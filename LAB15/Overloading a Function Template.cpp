#include <iostream>  
using namespace std;  
template<class P>
 void fun(P a)  
{  
    cout << "Value of a is : " <<a<<endl;  
}  
template<class P,class Q>
 void fun(P b ,Q c)  
{  
    cout << "Value of b is : " <<b<<endl;  
    cout << "Value of c is : " <<c<<endl;  
}  
int main()  
{  
   fun(20);  
   fun(40,50.8);  
   return 0;  
}
