t = int(input())
for _ in range(t):
    a, b = map(int, input().split())

    ans = float('inf')
    for addition in range(0, 32):
        newb = b + addition
        if newb == 1:
            continue

        operations = addition
        copya = a
        while copya > 0:
            copya //= newb
            operations += 1

        ans = min(ans, operations)

    print(ans)
