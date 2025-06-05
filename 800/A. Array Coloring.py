t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    count_of_odd=0
    for x in a:
        if x%2 ==1:
            count_of_odd +=1
    
    if count_of_odd %2 ==1:
        print("NO")
    else:
        print("YES")