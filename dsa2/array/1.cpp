//largest element in array
#include<iostream>
using namespace std;

int greatest(int arr[], int n){

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i+1];
        }
        
    }
    return max;
}


int secondgreatest(int arr[], int n){

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i+1];
        }
        
    }

    int second = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }
    }
    return second;
}

int sndlargest(int arr[] , int n){
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        } else if(arr[i] > slargest && arr[i] < largest){
            slargest = arr[i];
        }
        
    }
    return slargest;
    
}

int secondsmallest(int arr[] , int n){
    int smallest = arr[0];
    int ssmallest = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] <ssmallest && arr[i] != smallest){
            ssmallest = arr[i];
        }
        
    }
    return ssmallest;
}
int main(int argc, char const *argv[])
{
    int arr[5] = {2,5,1,3,10};
    cout<<greatest(arr, 5);
    cout<<endl;
    cout<<secondgreatest(arr, 5);
    cout<<endl;
    cout<<sndlargest(arr, 5);
    cout<<endl;
    cout<<secondsmallest(arr, 5);
    cout<<endl;
    return 0;
}
