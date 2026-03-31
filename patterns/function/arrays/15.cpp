//container with max water
//brute force approach
#include<iostream>
#include<vector>
using namespace std;

// int maxarea(vector<int> height){
//     int maxwater = 0;
//     int n = height.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i +1; j < n; j++)
//         {
//            int w = j-i;
//            int h = min(height[i], height[j]);
//            int area = w *h;
//            maxwater = max(maxwater , area);
// }        
// }
// return maxwater;
    
//} 

int maxarea(vector<int> height){
    int maxwater = 0;
    int n = height.size();
    int lp = 0, rp = n-1;
    while (lp< rp)
    {
      int w = rp - lp;
     int ht = min( height[lp],height[rp] );
     int area = ht * w;
     maxwater = max(maxwater, area);
     height[lp]< height[rp]? lp++ : rp--;
    }
    
return maxwater;
}
int main(int argc, char const *argv[])
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
  //  vector<int> height = {};

    int result = maxarea(height);
    cout << "Maximum water that can be contained: " << result << endl;


    return 0;
}
