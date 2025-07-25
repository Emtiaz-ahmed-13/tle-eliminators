import sys

t = int(input())
for _ in range(t):
    w, h = map(int, input().split())
    max_area = -sys.maxsize

    for i in range(4):
        data = list(map(int, input().split()))
        k = data[0]
        coords = data[1:]

        first = coords[0]
        last = coords[-1]
        base = last - first

        if i <= 1:
            height = h
        else:
            height = w

        max_area = max(max_area, base * height)

    print(max_area)
