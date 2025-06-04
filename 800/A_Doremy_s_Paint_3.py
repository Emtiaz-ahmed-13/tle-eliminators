t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    # Count frequency of each element
    frequency_map = {}
    for num in a:
        frequency_map[num] = frequency_map.get(num, 0) + 1

    if len(frequency_map) >= 3:
        print("No")
    else:
        freqs = list(frequency_map.values())
        if len(freqs) == 1 or freqs[0] == freqs[1]:
            print("Yes")
        elif n % 2 == 1 and abs(freqs[0] - freqs[1]) == 1:
            print("Yes")
        else:
            print("No")
