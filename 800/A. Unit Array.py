t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    positive_count=a.count(1)
    negative_count=n-positive_count

    operation=0
    while positive_count<negative_count or negative_count%2==1:
        operation +=1
        positive_count+=1
        negative_count -=1
    print(operation)
