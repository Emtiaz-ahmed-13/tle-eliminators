t=int(input())
for _ in range(t):
    a,b,c=map(int,input().split())

    answer=False
    new_a=2*b-c
    if new_a>0 and new_a %a==0:
        answer=True
    if(a+c)%2==0:
        new_b=(a+c)//2
        if new_b>0 and new_b%b==0:
            answer=True
    new_c=2*b-a
    if new_c>0 and new_c%c==0:
        answer=True
    
    print("YES" if answer else "NO")