#include<iostream>
using namespace std;

int main(int argc, char* argv)
{
    cout<<"Arguments is:\n " << argc<<endl;
 
    for (int i = 0; i < argc; i++) {
        cout<< argv[i];
        cout<<"arg"<<argc;
    }
    return 0;
}
