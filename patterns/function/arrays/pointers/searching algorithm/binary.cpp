#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + ((end-st) / 2);
        if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int a1[] = {-1, 0, 3, 4, 5, 9, 12};
    int tr1 = 12;

    int a2[] = {-10, -9, 1, 2, 3, 4};
    int tr2 = -9;

    int result = binarysearch(a1, 7, tr1);
    cout << result << endl;
    int result2 = binarysearch(a2, 6, tr2);
    cout << result2;

    return 0;
}
