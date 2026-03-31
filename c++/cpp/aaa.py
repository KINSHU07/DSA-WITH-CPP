import sys

def get_max_clean(N: int, S: str) -> int:
    max_clean = 0
    last_one_idx = -1
    
    for i in range(N):
        if S[i] == '1':
            # If we have seen a '1' previously, calculate the zeroes between them
            if last_one_idx != -1:
                L = i - last_one_idx - 1  # Length of the zero block bounded by '1's
                if L > 0:
                    # (L + 1) // 2 mathematically represents ceil(L / 2)
                    max_clean += (L + 1) // 2
            
            # Update the position of the most recently seen '1'
            last_one_idx = i
            
    return max_clean

# Standard boilerplate for reading from standard input
if __name__ == '__main__':
    # Read all input from standard input
    input_data = sys.stdin.read().split()
    if len(input_data) >= 2:
        N = int(input_data[0])
        S = input_data[1]
        
        # Output the result
        print(get_max_clean(N, S))