import math
a = 1
for i in range(2, 51):
    a = math.lcm(a, i)
print(a)

t = int(input())
for _ in range(t):
    n = int(input())

    i = 1
    while i <= 60 and n % i == 0:
        i += 1

    print(i - 1)
