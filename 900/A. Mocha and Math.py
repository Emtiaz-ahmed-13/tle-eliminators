import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    result = a[0]
    for i in range(1, n):
        result &= a[i]

    print(result)
