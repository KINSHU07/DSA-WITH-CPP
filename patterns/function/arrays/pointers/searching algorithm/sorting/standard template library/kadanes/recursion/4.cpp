//numbers to letter

#include<iostream>
using namespace std;

void saydigit(int n, string arr[]){
    if(n ==0)
    return;

    //processing
    int digit = n%10;
    n= n/10;
    
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(int argc, char const *argv[])
{
    string arr[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int n;

    cin>>n;

    cout<<endl<<endl<<endl;
    saydigit(n,arr);

    cout<<endl<<endl;
    return 0;
}
