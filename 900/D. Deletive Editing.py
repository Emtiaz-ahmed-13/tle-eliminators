def is_subsequence(s, t):
    j = 0  
    for ch in s:
        if j < len(t) and ch == t[j]:
            j += 1
    return j == len(t)

n = int(input())
for _ in range(n):
    s, t = input().split()
    print("YES" if is_subsequence(s, t) else "NO")
