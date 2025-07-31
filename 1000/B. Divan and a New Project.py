t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    building_map = [(a[i], i) for i in range(n)]
    building_map.sort(reverse=True) 

    ans = [0] * (n + 1)  
    minutes = 0
    coordinate = 1

    for height, idx in building_map:
        ans[idx + 1] = coordinate
        minutes += 2 * abs(coordinate) * height
        if coordinate < 0:
            coordinate = abs(coordinate) + 1
        else:
            coordinate = -coordinate

    print(minutes)
    print(' '.join(map(str, ans)))
