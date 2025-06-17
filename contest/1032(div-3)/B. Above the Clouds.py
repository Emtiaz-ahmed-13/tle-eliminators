import sys

def solve():
    n = int(sys.stdin.readline())
    s = sys.stdin.readline().strip()

    left_occurrence = [-1] * 26
    right_occurrence = [-1] * 26

    for i in range(n):
        char_code = ord(s[i]) - ord('a')
        if left_occurrence[char_code] == -1: 
            left_occurrence[char_code] = i
        right_occurrence[char_code] = i 

    found = False
    for k in range(1, n - 1): 
        char_code = ord(s[k]) - ord('a')
    
        if left_occurrence[char_code] < k or right_occurrence[char_code] > k:
            found = True
            break

    if found:
        sys.stdout.write("Yes\n")
    else:
        sys.stdout.write("No\n")

num_test_cases = int(sys.stdin.readline())
for _ in range(num_test_cases):
    solve()
