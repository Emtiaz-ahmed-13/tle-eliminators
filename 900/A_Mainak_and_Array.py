import sys
input = sys.stdin.readline

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        max_diff = float('-inf')
        
        for l in range(n):
            for r in range(l, n):
                sub = a[l:r+1]
                length = r - l + 1
                for k in range(length):  
                    rotated = sub[k:] + sub[:k]
                    new_a = a[:l] + rotated + a[r+1:]
                    max_diff = max(max_diff, new_a[-1] - new_a[0])
        
        print(max_diff)

solve()
