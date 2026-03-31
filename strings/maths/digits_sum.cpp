//find the sum of a digit

#include <iostream>
using namespace std;

void sumOfDig(int n){
    int sum = 0;
    while(n != 0){
        int digit = n%10;
        sum += digit;
        n /=10;
    }
    cout<<sum<<endl;

    // while(n!=0){
    //     int digit = n%10;
    //     n/=10;
    //     cout<<digit<<endl;
    // }
}

int main(int argc, char const *argv[])
{
    sumOfDig(2342);
    

    return 0;
}
