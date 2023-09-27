#include <iostream>
#include <istream>
#include <sstream>
#include <string>
#include <iomanip>
 
using namespace std;
int main () {  
  double f =4.235687;  
  cout << setprecision(4) << f << '\n';  
  cout << setprecision(2) << f << '\n';  
  cout << fixed;  
  cout << setprecision(5) << f << '\n';  
  cout << setprecision(9) << f << '\n';  
  return 0;  
}  
