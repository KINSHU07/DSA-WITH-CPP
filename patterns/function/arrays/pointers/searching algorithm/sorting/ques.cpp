//arrange the array in sorted order with only 0s , 1s,2s
//leetcode75

#include<iostream>
#include<vector>
using namespace std;


void sort012(vector<int> &arr){
    int n = arr.size();
    int count0 =0, count1=0, count2=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
       else if (arr[i] == 1)
        {
            count1++;
        }
        else {
            count2++;
        }
        
    }

    int idx =0;
    for (int i = 0; i < count0; i++)
    {
        arr[idx++] =0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[idx++] =1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[idx++] =2;
    }
    
    

}

int main(int argc, char const *argv[])
{
    vector<int> arr= {0,1,2,2,2,1,1,0,0,2,1,2,0,2};
    sort012(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
