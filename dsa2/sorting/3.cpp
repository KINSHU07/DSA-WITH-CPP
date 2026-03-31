#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-1-i; j++)
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
}

void selectionSort(int a[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++)
            if(a[j] < a[min]) min = j;
        swap(a[i], a[min]);
    }
}

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i], j = i-1;
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[100], b[100], c[100];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    bubbleSort(a, n);
    selectionSort(b, n);
    insertionSort(c, n);

    printArray(a, n);
    printArray(b, n);
    printArray(c, n);
    return 0;
}