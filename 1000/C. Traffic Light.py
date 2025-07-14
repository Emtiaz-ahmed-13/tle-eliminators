t = int(input())
for _ in range(t):
    n = int(input())
    color = input().strip()
    s = input().strip()

    s += s  # Duplicate the string
    last_green_index = -1
    max_seconds = float('-inf')

    for i in range(len(s) - 1, -1, -1):
        if s[i] == 'g':
            last_green_index = i
        if s[i] == color and last_green_index != -1:
            max_seconds = max(max_seconds, last_green_index - i)

    print(max_seconds)
