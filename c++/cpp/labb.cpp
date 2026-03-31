#include <bits/stdc++.h>
using namespace std;

string trim(string);

/**
 * Problem Analysis:
 * A window '0' can be cleaned if both its neighbors are '1'.
 * When a window is cleaned, it becomes '1', which might allow 
 * adjacent '0's to be cleaned.
 * * Logic:
 * We only care about blocks of '0's that are surrounded by '1's.
 * Let L be the length of a continuous block of '0's surrounded by '1's.
 * - If L = 1 (101): We clean the 0. Total cleaned = 1. String becomes 111.
 * - If L = 2 (1001): We can only clean one 0 because cleaning one makes 
 * it 1101 or 1011. Now the remaining 0 is still adjacent to a 0, so it 
 * cannot be cleaned. Total cleaned = 1.
 * - If L = 3 (10001): Clean the middle one -> 10101. Now the two 0s 
 * have two '1' neighbors. Clean both -> 11111. Total cleaned = 3.
 * * General Rule for a block of length L surrounded by '1's:
 * If L is odd: We can clean all L windows.
 * If L is even: We can clean L-1 windows.
 * (Note: If a block of 0s is at the edge and not surrounded by two 1s, 
 * we can clean 0 windows in that block).
 */

int get_max_clean(int N, string S) {
    int total_cleaned = 0;
    int i = 0;

    while (i < N) {
        if (S[i] == '0') {
            int start = i;
            while (i < N && S[i] == '0') {
                i++;
            }
            int end = i - 1;
            int length = end - start + 1;

            // Check if the block of 0s is surrounded by '1's
            if (start > 0 && end < N - 1) {
                if (length % 2 != 0) {
                    total_cleaned += length;
                } else {
                    total_cleaned += (length - 1);
                }
            }
        } else {
            i++;
        }
    }

    return total_cleaned;
}

int get_max_clean(int N, string S) {
    int total_cleaned = 0;
    int i = 0;

    while (i < N) {
        if (S[i] == '0') {
            int start = i;
            while (i < N && S[i] == '0') {
                i++;
            }
            int end = i - 1;
            int L = end - start + 1;

            // Block must be surrounded by '1's to be cleaned
            if (start > 0 && end < N - 1) {
                // Based on Case 1 (L=3 -> 2) and Case 3 (L=2 -> 1, L=1 -> 1)
                // The formula is ceil(L/2.0)
                total_cleaned += (L + 1) / 2;
            }
        } else {
            i++;
        }
    }

    return total_cleaned;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string inputline;
    if(!getline(cin, inputline)) return 0;
    int N = stoi(trim(inputline));
    
    if(!getline(cin, inputline)) return 0;
    string S = trim(inputline);
    
    int result = get_max_clean(N, S);
    cout << result << "\n";
    
    return 0;
}

/* Utility functions. Don't modify these */
string trim(string str) {
    if (str.empty()) return str;
    size_t firstScan = str.find_first_not_of(' ');
    size_t first = (firstScan == string::npos) ? str.length() : firstScan;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}