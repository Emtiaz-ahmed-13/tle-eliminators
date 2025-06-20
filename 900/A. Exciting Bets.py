import math
t=int(input())
for _ in range(t):
    a,b=map(int,input().split())

    if b>a:
        a,b=b,a
    if a == b:
        print(0,0)
    else:
        gcd=a-b
        moves=min(b%gcd, gcd-b%gcd)
        print(gcd, moves)