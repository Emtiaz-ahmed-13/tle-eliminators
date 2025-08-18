t = int(input())
for _ in range(t):
    n, s = map(int, input().split())
    x = list(map(int, input().split()))
    min_x = min(x)
    max_x = max(x)
    if s >= min_x and s <= max_x:
        # The starting position is within the range of x's
        steps = max_x - min_x
    elif s < min_x:
        steps = max_x - s
    else:  # s > max_x
        steps = s - min_x
    print(steps)