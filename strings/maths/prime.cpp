// chech a number is prime or not

#include <iostream>
using namespace std;

string inRange(int start, int end) {
    string primes = "";

    for (int num = start; num <= end; num++) {
        if (num < 2) continue;

        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes += to_string(num) + " ";
        }
    }

    return primes;
}


string isPrime(int n)
{
    for (int i = 0; i * i < n; i++)
    {
        if (n % 2 == 0)
        {
            return " not prime";
        }
    }
    return "prime";
}

int main(int argc, char const *argv[])
{
    
    cout << isPrime(23)<<endl;

    cout<<inRange(2,10);

    return 0;
}
