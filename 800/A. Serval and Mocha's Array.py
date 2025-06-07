import math

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    flag = False
    for i in range(n):
        for j in range(i + 1, n):
            if math.gcd(a[i], a[j]) <= 2:
                flag = True
                break 
        if flag:
            break
    
    print("YES" if flag else "NO")
