#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // LOOPS IN C++
    // FOR LOOP

    // for(intialization; condition; updation){
   // loop body(c++ code)
   // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<i<<endl;
    // }
 

 // while loop

//  while(condition){
//     c++ statement /code
//     i++
//  }
    
    // int k=1;
    // while (k<10)
    // {
    //     cout<<k<<endl;
    //     k++;
    // }
    

    //do while loop in c
    // do
    // {
    //     c++ statement;
    // )
    //  while (condition);
    
    int a, j=0;
    cout<<"enter the value of a";
    cin>>a;

    do
    {
        cout<<a<<"*"<<j<<"="<<a*j<<endl;
        j++;
    } while (j<10);



    return 0;
}
