t=int(input())
for _ in range(t):
    n,k,x=map(int,input().split())

    minimum_sum=k*(k+1)//2
    maximum_sum=n*(n+1)//2 -(n-k)*(n-k+1)//2

    if minimum_sum <=x <=maximum_sum:
        print("YES")
    else:
        print("NO")