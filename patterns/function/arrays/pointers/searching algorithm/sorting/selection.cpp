//selection sort




#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int SInd = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                SInd = j;

            }
            
        }
        swap(arr[i], arr[SInd]);
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
