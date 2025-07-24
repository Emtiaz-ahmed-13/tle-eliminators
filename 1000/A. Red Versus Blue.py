t=int(input())

for _ in range(t):
    n,r,b=map(int,input().split())

    length_of_red= r //(b+1)
    extra_red=r%(b+1)
    result=""
    for items in range(b+1):
        result+= 'R'* length_of_red
        if extra_red >0:
            result+='R'
            extra_red-=1
        if items<b:
            result+='B'
    print(result)