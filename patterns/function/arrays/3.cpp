//two pointer approach 
//reverse an array
#include<iostream>
using namespace std;

void reverse(int a[], int size ){

    int start =0;
    int end = size -1;
    while(start < end){
        swap(a[start], a[end]);
        start ++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"after reversing";
    reverse(a, n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
