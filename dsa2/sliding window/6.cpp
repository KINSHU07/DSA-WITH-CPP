//generate substring
//length of longest substring;
#include<bits/stdc++.h>
using namespace std;

// void generateSubstrings(string s) {
//     for(int i = 0; i < s.size(); i++) {
//         string sub = "";
//         for(int j = i; j < s.size(); j++) {
//             sub += s[j];
//             cout << sub << endl;
//         }
//     }
// }

int lengthOfLongestSubstring(string s) {
        int maxlen = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
        unordered_map<char , int> mpp;
            mpp[256] = {0};
            for(int j = i; j < s.size() ; j++){
                if(mpp[s[j]] == 1) break;
                int len = j- i +1;
                maxlen = max(maxlen , len);
                mpp[s[j]] = 1;
            }
        }
        return maxlen;
    }

int main() {
    string s = "abbcs";
    // generateSubstrings(s);
  cout<<  lengthOfLongestSubstring(s);

}
