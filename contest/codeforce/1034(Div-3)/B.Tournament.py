import sys

def solve():
    t = int(sys.stdin.readline())
    for _ in range(t):
        n, j, k = map(int, sys.stdin.readline().split())
        a = list(map(int, sys.stdin.readline().split()))
        strength_j = a[j-1]
        count_ge = 0
        for num in a:
            if num >= strength_j:
                count_ge += 1
        if count_ge >= k:
            print("YES")
        else:
            print("NO")

solve()