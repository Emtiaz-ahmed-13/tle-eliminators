t=int(input())
for _ in range(t):
    a,b,n=map(int,input().split())
    x=list(map(int,input().split()))

    maximum_time=b
    for damage in x:
        maximum_time +=min(damage,a-1)
    print(maximum_time)