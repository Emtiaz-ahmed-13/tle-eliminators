t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    flag = False
    for j in range(1,n-1):
        i,k=-1,-1
        for left in range(j):
            if a[left] < a[j]:
                i = left
                break
        for right in range(j+1,n):
            if a[right] < a[j]:
                k = right
                break
        if i != -1 and k != -1:
            print("YES")
            print(i+1,j+1,k+1)
            flag = True
            break
    if not flag:
        print("NO")