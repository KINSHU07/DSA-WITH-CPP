//reverse a array;

#include<iostream>
using namespace std;

void rev(int arr[], int i , int n){
    if(i>= n/2) return;
    swap(arr[i] , arr[n-i-1]);
    rev(arr ,i+1, n);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(auto it: arr){
        cin>>arr[it];
    }
    rev(arr , 0, n);
    for(auto it: arr){
        cout<<arr[it];
    }
    return 0;
}
