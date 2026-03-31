//pointers dynamic memmory allocation
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a= 4;
    int*ptr = &a;
    cout<<"the value of a is "<<*(ptr)<<endl;

    // dynamic allocation

    int *p = new int(9);
    cout<<"the value of address at p is "<< *(p)<<endl;

// dynamic allocation for an array
int *arr= new int[4];
arr[0]=1;   
//arr[2]=1;
*(arr + 3)=2;
arr[3]=1;  
arr[1]=00;
delete[] arr;
cout<<"the value of arr[0]  is "<< arr[0]<<endl;
cout<<"the value of arr[1]  is "<< arr[1]<<endl;
cout<<"the value of arr[2]  is "<< arr[2]<<endl;
cout<<"the value of arr[3]  is "<< arr[3]<<endl;

    return 0;
}
