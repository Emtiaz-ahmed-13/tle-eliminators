t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    freq={}
    for val in a:
        freq[val]=freq.get(val,0)+1

    current_higest_freq=max(freq.values())
    operations=0
    while current_higest_freq<n:
        operations+=1
        if current_higest_freq *2<=n:
            current_higest_freq*=2
        else:
            operations+=n-current_higest_freq
            current_higest_freq=n
    print(operations)