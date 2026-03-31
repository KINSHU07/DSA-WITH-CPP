#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
//      const int a=99;
//      cout<<"the value of a is "<<a;
//     //  int a =90;
//      cout<<"the value of a is "<<a;
//     return 0;

        //  manipulators     <<endl    <<setw()

        int a=2,b=29,c=10002;
        cout<<"the value of a without setw "<<a<<endl;
        cout<<"the value of c without setw "<<c<<endl;
        cout<<"the value of b without setw "<<b<<endl;
 
        cout<<"the value of a with setw "<<setw(4)<<a<<endl;
        cout<<"the value of c with setw "<<setw(4)<<c<<endl;
        cout<<"the value of b with setw "<<setw(4)<<b<<endl;
//basically it provide a width from the right end of the text


 }

