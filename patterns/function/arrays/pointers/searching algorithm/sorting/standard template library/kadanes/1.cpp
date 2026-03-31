#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int arr[6]= {1,2,3,4,56,6};
    int n = 6;
    for (int st = 0; st < n; st++)
    {
        for (int i = st; i < n; i++)
        {
            for (int j= 0; j< i; j++)
            {
                cout<<arr[j];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
