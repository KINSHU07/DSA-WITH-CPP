import sys

def get_max_clean(N, S):
    ans = 0
    i = 0

    while i < N:
        if S[i] == '0':
            j = i
            while j < N and S[j] == '0':
                j += 1

            # zero block must be surrounded by '1'
            if i > 0 and j < N and S[i - 1] == '1' and S[j] == '1':
                length = j - i
                ans += (length + 1) // 2

            i = j
        else:
            i += 1

    return ans


def main():
    N = int(sys.stdin.readline().strip())
    S = sys.stdin.readline().strip()

    result = get_max_clean(N, S)
    print(result)


if __name__ == "__main__":
    main()