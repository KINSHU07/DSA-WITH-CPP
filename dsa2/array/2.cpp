#include<iostream>
using namespace std;

bool is_sorted(int arr[] , int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1]){  
            return false;   
        }
    }
    return true;    
}

int main()
{
    int arr[7] = {2,4,5,6,7,1,10};
    cout << is_sorted(arr , 7);
    return 0;
}
