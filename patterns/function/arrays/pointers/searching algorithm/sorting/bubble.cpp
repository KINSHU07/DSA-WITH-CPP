//bubble sort

#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        
        }
        
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
