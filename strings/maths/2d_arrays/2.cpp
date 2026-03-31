//count sum of diagonals
#include<iostream>
using namespace std;

int diaSum(int arr[][4], int row , int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            } else if (j == row-i-1)
            {
                sum += arr[i][j];
                
            }
            
            
        }
        
    }
    return sum;
    
}

int main(int argc, char const *argv[])
{
    int a[4][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    cout<<diaSum(a,4,4)<<endl;
    return 0;
}

