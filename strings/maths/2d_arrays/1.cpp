#include<iostream>
using namespace std;

bool isKey(int mat[][4], int row, int col, int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
            
        }
        
    }
    return false;
    
}


int getmax(int arr[][4], int row, int col){
    int maxRowSum = INT16_MIN;
    for (int i = 0; i < row; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < col; j++)
        {
         rowsum += arr[i][j];
        }
        
        maxRowSum = max(maxRowSum, rowsum);
    }
    return maxRowSum;

}
int main(int argc, char const *argv[])
{
    int arr[3][4]= {{1,2,3,4}, {2,3,4,3}, {3,2,4,2}};
    cout<<isKey(arr,3,4,2)<<endl;
    
    cout<<getmax(arr,3,4)<<endl;
  
    


    return 0;
}
