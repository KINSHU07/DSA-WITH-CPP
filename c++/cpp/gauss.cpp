#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int c, r;
    cout<<"enter the value of roes and column ";
    cin>>c;
    cin>>r;
    int arr[c][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; i++)
        {
            cin>> arr[i][j];
        }   
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; i++)
        {
            cout<< arr[i][j];
        }   
    }
    
    return 0;
}
