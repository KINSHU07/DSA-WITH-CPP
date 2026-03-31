// print the smallest value of the array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int small = a[0];
    for (int i = 0; i < n; i++)
    {

        if (a[i] < small)
        {
            small = a[i];

        }
        cout<<i<<endl;
    }
  //  cout << small;

    return 0;
}
