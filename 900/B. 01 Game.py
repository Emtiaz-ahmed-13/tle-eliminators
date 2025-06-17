t=int(input())
for _ in range(t):
    s=input()

    count_of_zero=s.count('0')
    count_of_one=s.count('1')

    operations=min(count_of_zero,count_of_one)

    if operations %2!=0:
        print("DA")
    else:
        print("NET")