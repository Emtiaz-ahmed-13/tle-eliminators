t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    count_of_zero=a.count(0)
    if count_of_zero==n:
        print(0)
        continue

    left=0
    while left<n and a[left]==0:
        left+=1

    right=n-1
    while right>=0 and a[right]==0:
        right-=1
    found_zero=False

    for i in range(left,right+1):
        if a[i]==0:
            found_zero=True
            break

    if not found_zero:
        print(1)
    else:
        print(2)