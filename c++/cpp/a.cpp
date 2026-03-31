#include <iostream>
#include <string>

using namespace std;

string trim(string); // Provided in the original template

int get_max_clean(int N, string S) {
    int max_clean = 0;
    int last_one_idx = -1;
    
    for (int i = 0; i < N; ++i) {
        if (S[i] == '1') {
            // If we have seen a '1' previously, calculate the zeroes between them
            if (last_one_idx != -1) {
                int L = i - last_one_idx - 1; // Length of the zero block
                if (L > 0) {
                    max_clean += (L + 1) / 2; // Equivalent to ceil(L / 2.0)
                }
            }
            // Update the position of the most recently seen '1'
            last_one_idx = i;
        }
    }
    
    return max_clean;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    if (cin >> N) {
        string S;
        cin >> S;
        
        cout << get_max_clean(N, S) << "\n";
    }
    
    return 0;
}