t=int(input())
for _ in range(t):
    s=input()
    n=len(s)
    count_of_0s=s.count('0')
    count_of_1s=s.count('1')
    length_of_t=0
    for i in range(n):
        if s[i] == '0' and count_of_1s>0:
            count_of_1s-=1
            length_of_t +=1
        elif s[i] == '1' and count_of_0s>0:
            count_of_0s-=1
            length_of_t +=1
        else:
            break
    print(n-length_of_t)