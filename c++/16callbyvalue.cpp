#include<iostream>
using namespace std;
// void swap(int a, int b){
//     int temp= a;
//     a=b;
//     b=temp;
// }
void swap_pointer(int* i, int* j){
    int temp= *i;
    *i= *j;
    *j=temp;
}

void swapRefvariable(int &a, int &b){
    int temp= a;
    a=b;
    b=temp;
}
int main(int argc, char const *argv[])
{
    int x=4,y=5;
    cout<<"the value of x and y is "<<x <<y<<endl;
   // swap(x,y);       // this will not swap the function
    swap_pointer(&x, &y);                        // this will swap the function using pointer 
    cout<<"the value of x and y is "<<x <<y<<endl;
    swapRefvariable(x,y);                     // this will swap the function using ref variable
     cout<<"the value of x and y is "<<x <<y<<endl;
    return 0;
}
