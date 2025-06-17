t = int(input())
for _ in range(t):
    n = int(input())
    count_of_3 = 0
    count_of_2 = 0

    while n > 0 and n % 3 == 0:
        count_of_3 += 1
        n //= 3

    while n > 0 and n % 2 == 0:
        count_of_2 += 1
        n //= 2

    if n > 1 or count_of_2 > count_of_3:
        print(-1)
    else:
        print(count_of_3 + (count_of_3 - count_of_2))
