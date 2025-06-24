t = int(input())
for _ in range(t):
    start, jumps = map(int, input().split())

    if jumps % 4 == 1:
        final_pos = -jumps
    elif jumps % 4 == 2:
        final_pos = 1
    elif jumps % 4 == 3:
        final_pos = jumps + 1
    else: 
        final_pos = 0

    if start % 2 == 0:
        final_pos = start + final_pos
    else:
        final_pos = start - final_pos

    print(final_pos)

