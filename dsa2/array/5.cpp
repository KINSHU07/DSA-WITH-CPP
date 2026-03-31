//rotatae by k index

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr){
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i-1] = arr[i];

    }
    arr[arr.size() -1] = temp;
    
}

void rotateK_brute(vector<int> &arr, int k){
    int n = arr.size();
    k = k %n;

    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i-k] = arr[i];
    }

    for (int i = 0; i < k ; i++)
    {
        arr[n-k +i] = temp[i];
    }
    
}


void rotate_optimal(vector<int> &arr,int n , int d){
   reverse(arr.begin(), arr.begin() + d);
reverse(arr.begin() + d, arr.end());
reverse(arr.begin(), arr.end());

}

/*void reverse(int ar[] , int st , int end){
while(st <= end){
int temp = arr[st];
arr[st] = arr[end];
arr[end] = temp;
stt++;
end--
}
}*/
int main(int argc, char const *argv[])
{
    vector<int> an = {2,4,6,8,10,12,14,16};
    int n = an.size();

    rotateK_brute(an,3);

    for(auto it : an){
        cout<<it<<" ";
    }

    rotate_optimal(an,an.size(), 3);

    for(auto it : an){
        cout<<it<<" ";
    }
    return 0;
}
