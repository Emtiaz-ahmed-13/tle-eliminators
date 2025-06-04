import sys
input = sys.stdin.readline

t=int(input())
for _ in range(t):
    n=int(input())
    b=list(map(int,input().split()))
    a=[b[0]]

    for i in range(1,n):
        if b[i]>=b[i-1]:
            a.append(b[i])
        else:
            a.extend([b[i],b[i]])

    sys.stdout.write(str(len(a))+"\n")
    sys.stdout.write(" ".join(map(str,a))+"\n")