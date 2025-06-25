t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    from collections import Counter

    freq = Counter(a)
    max_freq = max(freq.values())
    ops = 0
    cur = max_freq

    while cur < n:
        ops += 1  
        add = min(cur, n - cur)
        ops += add
        cur += add

    print(ops)

