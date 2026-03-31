//merge sort problem
//leetcode 88
#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &num1, int n, vector<int> &num2, int m){
int idx = m+n-1, i = m-1, j = n-1;
while (i >=0 && j>=0)
{
    if (num1[i] >= num2[j])
    {
        num1[idx] = num1[i];
        idx--;
        i--;
    }
    else{
         num2[idx] = num2[j];
        idx--;
        j--;
    }
}
while (j >= 0)
{
    num2[idx] = num2[j];
        idx--;
        j--;
}


}

