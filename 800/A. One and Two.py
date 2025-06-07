t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    total_twos = a.count(2)
    current_twos = 0
    ans = -1

    for i in range(n):
        if a[i] == 2:
            current_twos += 1
        if current_twos == total_twos - current_twos:
            ans = i + 1  
            break

    print(ans)
