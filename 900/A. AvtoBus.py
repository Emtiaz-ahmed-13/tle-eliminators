t = int(input())
for _ in range(t):
    n = int(input())
    
    if n < 4 or n % 2 == 1:
        print(-1)
    else:
        found = False
        min_buses = None

       
        for x in range(n // 6, -1, -1):
            if (n - 6 * x) % 4 == 0:
                y = (n - 6 * x) // 4
                min_buses = x + y
                found = True
                break

        if not found:
            print(-1)
        else:
            max_buses = n // 4  
            print(min_buses, max_buses)
