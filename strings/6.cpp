// impostant cocept to find a word in a string

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
        int n = s.length();
        reverse(s.begin(), s.end()); // Reverse the whole string first

        string ans = "";
        int i = 0;

        while (i < n) {
            // Skip spaces
            while (i < n && s[i] == ' ') i++;

            // Build one word
            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word and add to result
            reverse(word.begin(), word.end());
            if (!word.empty()) {
                if (!ans.empty()) ans += " ";
                ans += word;
            }
        }

        return ans;
    }
}


