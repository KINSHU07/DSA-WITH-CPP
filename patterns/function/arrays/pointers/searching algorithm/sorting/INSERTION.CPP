//INSERTION SORT

//bubble sort

#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int prev = i-1;
        while (prev >=0 && arr[prev] >> cur)
        {
            arr[prev+1] == arr[prev];
            prev--;
        }
        
        arr[prev+1] =cur;
    }
   
}

int main(int argc, char const *argv[])
{
    int n =5;
    int a[] = {4,3,5,21,1};
    sort(a,n);
    for (int i = 0; i < n; i++) 
    {
        cout<<a[i]<<" "<<endl;
    }
    
    return 0;
}
