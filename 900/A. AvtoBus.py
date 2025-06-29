import math

t = int(input())
for _ in range(t):
    n = int(input())
    if n < 4 or n % 2 == 1:
        print(-1)
    else:
        min_buses = math.ceil(n / 6)
        max_buses = n // 4
        print(min_buses, max_buses)
