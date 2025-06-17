def solve():
    t=int(input())
    for _ in range(t):
        n=int(input())
        v=list(map(int, input().split()))
        answer=v[-1]-v[0]
        
        for i in range(1,n):
            answer=max(answer, v[i]-v[0])
        for i in range(1,n-1):
            answer=max(answer, v[i+1]-v[i-1])
        for i in range(n-1):
            answer=max(answer, v[i+1]-v[i])
        print(answer)

import sys
input = sys.stdin.readline

solve()