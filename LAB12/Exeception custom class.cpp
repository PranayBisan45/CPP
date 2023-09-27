#include <iostream>
using namespace std;
class Exe1{
   string str;
   public:
      Exe1(string str){
         try{
            if (str == "HI"){
               throw "Exception! String cannotbe 'HI!";
            }
            this->str = str;   
         }
         catch(const char* s) {
            cout << s << endl;
         }
      }
};

int main() {
   Exe1 t("HI");
   return 0;
}
