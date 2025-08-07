def is_fair(n):
    num = n
    while num != 0:
        x = num % 10
        if x != 0 and n % x != 0:
            return False
        num //= 10
    return True 

t = int(input())
for _ in range(t):
    n = int(input())
    while not is_fair(n):
        n += 1
    print(n)
