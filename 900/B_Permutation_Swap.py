import math
t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    k= abs(a[0]-1)
    for i in range(1,n):
        k=math.gcd(k,abs(a[i]-(i+1)))

    print(k)