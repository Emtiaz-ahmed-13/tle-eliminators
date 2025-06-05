import sys
input=sys.stdin.readline

t=int(input())
for _ in range(t):
    a,b,c=map(int,input().split())
    if c%2 ==1:
        if b>a:
            print("Second")
        else:
            print("First")
    else:
        if a>b:
            print("First")
        else:
            print("Second")