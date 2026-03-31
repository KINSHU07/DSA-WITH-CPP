#include<iostream>
using namespace std;

void merge(int *arr , int s , int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    // merge two sorted arrays
    int idx1 = 0, idx2 = 0;
    k = s;

    while(idx1 < len1 && idx2 < len2){
        if(first[idx1] < second[idx2]){
            arr[k++] = first[idx1++];
        } else {
            arr[k++] = second[idx2++];
        }
    }

    while(idx1 < len1){
        arr[k++] = first[idx1++];
    }
    while(idx2 < len2){
        arr[k++] = second[idx2++];
    }

    delete [] first;
    delete [] second;
}

void mergesort(int *arr , int s , int e){
    if(s >= e){
        return;
    }

    int mid = s + (e-s)/2;

    // left part sorting
    mergesort(arr, s, mid);

    // right part sorting
    mergesort(arr, mid+1 , e);

    // merge
    merge(arr , s , e);
}

int main() {
    int arr[10] = {34,23,12,54,65,34,23,76,14,18};
    int n = 10;

    mergesort(arr, 0 , n-1);
    for(int c : arr){
        cout << c << " ";
    }
    return 0;
}
