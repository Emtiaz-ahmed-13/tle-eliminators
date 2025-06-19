t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    v=list(map(int,input().split()))

    pointer=n*k
    total=0
    for _ in range(k):
        pointer -=(n//2+1)
        total +=v[pointer]
    print(total)