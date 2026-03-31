//recurcive approach log n time complexity
#include<iostream>
using namespace std;

int binarysearch(int arr[], int target, int start, int end){
if(start<= end){
    int mid = start + (end-start)/2;
    if(target > arr[mid]){
return binarysearch (arr,  target,  mid+1, end);
    }else if (target< arr[mid]){
    return binarysearch (arr,  target,  start, mid-1);
    }
    else{
        return mid; 
    }
return -11;
}    
        
    }

int main() {
    int a1[]= {-1,0,3,4,5,9,12};
    int tr1= 12;

   

    int result = binarysearch(a1,tr1, 0,7 );
    cout<<result<<endl;
    

    return 0;
}
