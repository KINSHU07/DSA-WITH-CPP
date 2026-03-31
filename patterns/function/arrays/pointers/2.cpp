#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a[]= {1,2,3,4,5};
    cout<<*a <<endl;        //a is a pointer which points towards the first element of the a


    int b =10, c= 20;
    int *ptr = &b;
    ptr = &c;                  //we can do this on pointer but cannot do on arrays pointer

    // a = &b;             throw an error

    cout<<*(a)<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;
    cout<<*(a+3)<<endl;
    
    int *ptr1;                         //suppose it is 100
    int *ptr2 = ptr1 + 3;              //now it is 112
    cout<<ptr2 - ptr1<<endl;                // it shows how many integer block is left 

    cout<<(ptr2< ptr1)<<endl;

    return 0;
}
