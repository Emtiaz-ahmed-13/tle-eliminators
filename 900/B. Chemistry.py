import sys
input = sys.stdin.read

data = input().split()
index = 0

t = int(data[index])
index += 1

results = []

for _ in range(t):
    n = int(data[index])
    k = int(data[index + 1])
    s = data[index + 2]
    index += 3

    freq = [0] * 26
    for ch in s:
        freq[ord(ch) - ord('a')] += 1

    odd = sum(f % 2 for f in freq)

    if odd > k + 1:
        results.append("NO")
    else:
        results.append("YES")

sys.stdout.write('\n'.join(results) + '\n')
