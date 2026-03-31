#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0 ; i <n ; i++){
        printf("%d  ", A[i]);

    }
    printf("\n");
}

void merge(int a[], int low , int mid, int high){
    int i  = low;
    int j = mid+1;
    int k = low;
    int B[high+1];


    while(i<=mid && j <= high){
        if(a[i] < a[j]){
            B[k] = a[i];
            k++;
            i++;
        } else{
            B[k] = a[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        B[k++] = a[i++];
    }
    while(j <= high){
        B[k++] = a[j++];
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = B[i];
    }
    
}

void mergesort(int a[], int low, int high){
   if(low < high){

    int mid = (low + high)/2;

    mergesort(a, low, mid);
    mergesort(a, mid+1, high);
    merge(a,low,mid, high);
}
}

int main(int argc, char const *argv[])
{
    int a[10] = {2,4,6,1,3,5,10,9,8,7};
    int n = 10;

    mergesort(a, 0,9);
    printArray(a,n);
    return 0;
}
