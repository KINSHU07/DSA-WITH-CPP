//product of array except itself
#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> numbers){
    int n = numbers.size();
   vector<int> ans(n, 1);
   for (int i = 0; i < n; i++)
   {
        int pro =1;
        for (int j = 0; j< n; j++)
        {
            if(i != j){
            pro *= numbers[j];
            }
        }
        
        ans[i] = pro;
    }
return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> numbers={1,2,3,4};
    vector<int> result = product(numbers);
    
    cout << "Product array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
   
   
    return 0;
}

