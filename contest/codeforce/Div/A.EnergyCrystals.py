def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    res = []

    for i in range(1, t + 1):
        x = int(data[i])
        left, right = 0, 64  # log2(10^9) ≈ 30, but go a bit higher for safety

        while left < right:
            mid = (left + right) // 2
            if (1 << mid) - 1 >= x:
                right = mid
            else:
                left = mid + 1
        
        res.append(str(left + 2))  # +2 for synchronizing all three crystals
    
    print("\n".join(res))

solve()
