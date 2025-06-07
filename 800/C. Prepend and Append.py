t=int(input())
for _ in range(t):
    n=int(input())
    s=input().strip()

    ans=n
    left,right=0,n-1
    while left <=right:
        if s[left] != s[right]:
            ans-=2
            left+=1
            right-=1
        else:
            break
    print(ans)

