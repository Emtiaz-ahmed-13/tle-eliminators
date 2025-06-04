def check(s,x):
    if len(x)<len(s):
        return False
    for i in range(len(x)-len(s)+1):
        if x[i:i+len(s)]==s:
            return True
    return False

t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    x=input()
    s=input()
    x_versions=[x]
    for _ in range(5):
        x_versions.append(x_versions[-1]+x_versions[-1])

    ans = -1
    for i, version in enumerate(x_versions):
        if check(s, version):
            ans = i
            break
    
    print(ans)