import sys 
input = sys.stdin.readline

def ceil_devision(a,b):
    return (a+b-1)//b

def solve():
    t=int(input())
    for _ in range(t):
        x,y,k=map(int,input().split())

        sticks_needed=k*y+k-1
        sticks_gained_per_trade=x-1

        trades=ceil_devision(sticks_needed,sticks_gained_per_trade)+k
        print(trades)

solve()
