import sys

input=sys.stdin.readline

t=int(input())

for _ in range(t):
    n,k=map(int,input().split())


    if k==1:
        print(n)
    else:
        if k%2==1:
            print(*[n]*k)
        else:
            print(0,*[n]*(k-1))