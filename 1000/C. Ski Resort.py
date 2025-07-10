t=int(input())
for _ in range(t):
    n,k,q=map(int,input().split())
    a=list(map(int,input().split()))

    for i in range(n):
        a[i] =1 if a[i] <= q else 0

    count_of_1s=0
    ways=0

    for i in range(n):
        if a[i] ==1:
            count_of_1s+=1
        else:
            if count_of_1s>=k:
                diff=count_of_1s -k+1
                ways+=(diff*(diff+1))//2
            count_of_1s=0
    if count_of_1s>=k:
        diff=count_of_1s-k+1
        ways+=(diff*(diff+1))//2
    print(ways)