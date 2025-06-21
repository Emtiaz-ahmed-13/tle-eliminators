t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    count_of_zeros=a.count(0)
    count_of_ones=a.count(1)
    ways=(2** count_of_zeros)*count_of_ones

    print(ways)