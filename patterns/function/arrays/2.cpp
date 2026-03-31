//linear search
#include <iostream>
using namespace std;
int search(int arr[], int size,int target){
for (int i = 0; i < size; i++)
{
    if (arr[i] == target)
    {
        return i;
    }
    
}
return -1;

}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
   
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin>>target;

    int result = search(a, n, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }


    return 0;
}
