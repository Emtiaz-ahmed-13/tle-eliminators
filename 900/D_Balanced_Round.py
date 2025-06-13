t=int(input())
for _ in range(t):
    n,k=map(int, input().split())
    a=list(map(int, input().split()))

    a.sort()
    counter=1
    largest_length=1
    for i in range(1,n):
        if a[i]-a[i-1]<=k:
            counter+=1
        else:
            counter=1
        largest_length=max(largest_length, counter)

    print(n-largest_length)