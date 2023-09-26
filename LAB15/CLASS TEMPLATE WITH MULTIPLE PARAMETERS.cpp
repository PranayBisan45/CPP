#include <iostream>  
     using namespace std;  
     template<class P1, class P2>  
    class A   
    {  
         P1 a;  
         P2 b;  
         public:  
        A(P1 x,P2 y)  
       {  
           a = x;  
           b = y;  
        }  
           void display()  
          {  
                 cout << "Values of a and b are : " << a<<" , "<<b<<std::endl;  
           }  
      };  
  
      int main()  
     {  
           A<int,float> d(8,9.2);  
           d.display();  
           return 0;  
     }  
