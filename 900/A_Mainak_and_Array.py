t = int(input())
for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))

    answer = v[-1] - v[0]

    for i in range(1, n):
        answer = max(answer, v[i] - v[0])

    for i in range(n - 1):
        answer = max(answer, v[-1] - v[i])

    for i in range(n - 1):
        answer = max(answer, v[i] - v[i + 1])

    print(answer)
