import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    mx=max(a)
    b=[x for x in a if x != mx]
    c=[x for x in a if x ==mx]

    if not b:
        print(-1)
    else:
        print(len(b),len(c))
        print(*b)
        print(*c)