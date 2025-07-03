import sys
input = sys.stdin.read

data = input().split()
idx = 0
t = int(data[idx])
idx += 1

for _ in range(t):
    n = int(data[idx])
    k = int(data[idx + 1])
    idx += 2
    a = list(map(int, data[idx:idx + n]))
    idx += n

    ans = float('inf')
    even_count = 0

    for num in a:
        if num % 2 == 0:
            even_count += 1
        if num % k == 0:
            ans = 0
        ans = min(ans, (k - num % k))

    if k == 4:
        if even_count >= 2:
            ans = min(ans, 0)
        elif even_count == 1:
            ans = min(ans, 1)
        elif even_count == 0:
            ans = min(ans, 2)

    print(ans)
