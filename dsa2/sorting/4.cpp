#include<iostream>
using namespace std;

void bubble(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n -1 -i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[i] , arr[j+1]);
            }
        }
        
    }
    
}

void selection(int arr[] , int n){
    for(int i = 0 ; i < n-1; i++){
        int min = i;
        for (int j= i+1; j < n ; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
        
    }
}

void insertion(int arr[] , int n){
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]  , j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}
int main(int argc, char const *argv[]) 
{
    int arr[5] = {1,3,5,2,4};
    insertion(arr , 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
  return 0;
}
