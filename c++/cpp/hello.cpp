#include <iostream>
#include <vector>
using namespace std;
void printa(vector<vector<int>> &arr, int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


void gauss(vector<vector<int>> &arr, int r, int c)
{
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = i+1; j < r; j++)
        {
            int fact = arr[j][i] / arr[i][i];

            for (int k = i; k < c; k++)
            {
                arr[j][k] = arr[j][k] - fact * arr[i][k];
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int c, r;
    cout << "enter the value of roes and column ";
    cin >> c;
    cin >> r;
    vector<vector<int>> arr(r, vector<int>(c));
    cout << "enter the elemeents";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "the array is: ";

    printa(arr, r, c);
    
    gauss(arr, r, c);
    printa(arr, r, c);

    return 0;
}
