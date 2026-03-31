//functors
//it is basically an object that totally behave like a function
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[] = {32,54,12,1,65,2,0};
    sort(a , a+6);
    sort(a , a+6, greater<int>());

    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}

//greater<int> sort the array in deccending order