import math

t=int(input())
for _ in range(t):
    n,x=max(int,input().split())
    a=list(map(int,input().split()))

    max_sum=0
    for i in a:
        max_sum +=math.ceil(i/x)
    
    total_sum=sum(a)
    min_sum=math.ceil(total_sum/x)

    print(min_sum,max_sum)
    