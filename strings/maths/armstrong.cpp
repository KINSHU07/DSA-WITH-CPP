//armstrong number is a number that is equal to the cube of digits

#include<iostream>
using namespace std;

bool isarmstrong(int n){
int copyN = n;
int sumofcubes= 0;
while(n!=0){
    int dig = n%10;
    sumofcubes+= (dig * dig *dig);
    n/=10;

}
return sumofcubes == copyN;
}

int main(int argc, char const *argv[])
{
    int n = 2;

    if(isarmstrong(n)){
        cout<<" is a armstrong number";
    }else{
        cout<< " not a armstrong number";
    }
    return 0;
}
