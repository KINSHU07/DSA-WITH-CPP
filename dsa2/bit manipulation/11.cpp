//count the power set

#include <iostream>
#include <vector>
using namespace std;

void powerSet(vector<int>& arr){
    int n = arr.size();
    int total = 1 << n;   

    for(int mask = 0; mask < total; mask++){
        cout << "{ ";
        for(int j = 0; j < n; j++){
            if(mask & (1 << j)){
                cout << arr[j] << " ";
            }
        }
        cout << "}" << endl;
    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    powerSet(arr);
    return 0;
}