//bublle sort
#include<iostream>
using namespace std;


void sort(int *arr , int n){
    if(n ==0 || n==1){
        return ;
    }
    for(int i = 0 ; i < n-1 ; i ++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    sort(arr , n-1);
}
int main(int argc, char const *argv[])
{
    int arr[6] = {1,3,2,6,5,4};

    sort(arr, 6);

    for( int c : arr){
        cout<<c<<endl;
    }
        return 0;
}
