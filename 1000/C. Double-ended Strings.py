import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    a = input().strip()
    b = input().strip()
    n = len(a)
    m = len(b)
    lcs = 0

    for length in range(1, min(n, m) + 1):
        for i in range(n - length + 1):
            for j in range(m - length + 1):
                if a[i:i+length] == b[j:j+length]:
                    lcs = max(lcs, length)

    operations = n + m - 2 * lcs
    print(operations)
