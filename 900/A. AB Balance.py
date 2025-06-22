t=int(input())
for _ in range(t):
    s=list(input())
    n=len(s)
    if s[0] !=[-1]:
        if s[0]=='a':
            s[0]='b'
        else:
            s[0]='a'
    print(''.join(s))