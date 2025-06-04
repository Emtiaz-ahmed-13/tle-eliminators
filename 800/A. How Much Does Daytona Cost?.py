t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    number_is_present=False

    for num in a:
        if num == k:
            number_is_present = True
            break
    
    if number_is_present:
        print("YES")
    else:
        print("NO")