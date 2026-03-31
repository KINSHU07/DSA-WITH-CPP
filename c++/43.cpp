#include<iostream>
using namespace std;
class test {
    int a ;
    int b;
    public:
  //  test( int i, int j) : a(i), b(i*j)
  test( int i, int j) : a(i)               //also intialize like this
   // test( int i, int j) : b(j)                //this will not excecute because a is declared first so it have to intiallize first
  //  test( int i, int j) : b(a+j) , a(i+b)               //this will not excecute because a is declared first so it have to intiallize first
    {
        b=(a*j) ;                      //we can also intialize like that
        
        cout<<"constructor excecuted"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }

};

int main(int argc, char const *argv[])
{
    test t(69,1);
    return 0;
}


/*
synatax for intialization

constructor (argument list ): intialiaztion section{
        assignment + othe code    
}
*/