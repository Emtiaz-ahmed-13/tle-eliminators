def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        ops = []

        # Step 1: Ensure a[i] < b[i] by swapping if needed
        for i in range(n):
            if a[i] > b[i]:
                a[i], b[i] = b[i], a[i]
                ops.append((3, i + 1))

        # Step 2: Bubble sort a[] with recorded swaps
        for i in range(n):
            for j in range(n - 1):
                if a[j] > a[j + 1]:
                    a[j], a[j + 1] = a[j + 1], a[j]
                    b[j], b[j + 1] = b[j + 1], b[j]
                    ops.append((1, j + 1))  # operation type 1: swap a[j], a[j+1]

        # Step 3: Bubble sort b[] with recorded swaps (while preserving a)
        for i in range(n):
            for j in range(n - 1):
                if b[j] > b[j + 1]:
                    a[j], a[j + 1] = a[j + 1], a[j]
                    b[j], b[j + 1] = b[j + 1], b[j]
                    ops.append((2, j + 1))  # operation type 2: swap b[j], b[j+1]

        # Output
        print(len(ops))
        for typ, i in ops:
            print(typ, i)

solve()
