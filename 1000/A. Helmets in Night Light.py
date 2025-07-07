t = int(input())
for _ in range(t):
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    v = list(zip(b, a))  # Pair: (sharing_cost, can_be_shared)
    v.sort()  # Sort by cost

    minimum_cost = p  # Chief initially shares with one
    already_shared = 1

    for sharing_cost, can_be_shared in v:
        if sharing_cost >= p:
            break

        if already_shared + can_be_shared > n:
            minimum_cost += (n - already_shared) * sharing_cost
            already_shared = n
            break
        else:
            minimum_cost += can_be_shared * sharing_cost
            already_shared += can_be_shared

    # If more still need to be shared, chief shares the rest
    minimum_cost += (n - already_shared) * p
    print(minimum_cost)
