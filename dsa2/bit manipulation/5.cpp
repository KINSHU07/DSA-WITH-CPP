//seting a bit to 1

#include<iostream>
using namespace std;

int setIthBit(int n, int i){
    return n | (1 << i);
}

int main(){
    int n, i;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position (0-based): ";
    cin >> i;

    int result = setIthBit(n, i);

    cout << "Result after setting ith bit: " << result << endl;

    return 0;
}
