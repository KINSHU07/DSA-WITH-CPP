#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int temp[100];   // temporary array
    int i = left;
    int j = mid + 1;
    int k = left;

    // compare and store smaller value
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // copy remaining elements
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // copy back to original array
    for (int p = left; p <= right; p++) {
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);      
        mergeSort(arr, mid + 1, right); 
        merge(arr, left, mid, right);   
    }
}

int main() {
    int arr[] = {8, 3, 5, 4, 7, 6, 1, 2};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
