#include<iostream>
using namespace std;

// Template function for calculating average of two values of different types
template <class T1, class T2>
float average(T1 a, T2 b){
    float avg = (a + b) / 2.0;
    return avg;
}

// Template function for swapping two values of the same type
template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[]) {
    // Example of calling average with two different types
    float a = average(2.4, 3.3);
    cout << "Average: " << a << endl;

    // Example of calling swapp with integers
    int k = 2;
    int j = 3;
    swapp(k, j);
    cout << "After swap: " << k << " " << j << endl;

    return 0;
}
