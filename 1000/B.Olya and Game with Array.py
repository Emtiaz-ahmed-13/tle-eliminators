t = int(input())
for _ in range(t):
    n = int(input())

    second_elements = []
    lowest_first_minimum = float('inf')

    for _ in range(n):
        m_and_rest = list(map(int, input().split()))
        m = m_and_rest[0]
        a = m_and_rest[1:]

        a.sort()
        second_elements.append(a[1])
        lowest_first_minimum = min(lowest_first_minimum, a[0])

    second_elements.sort()

    sum_of_second_elements = sum(second_elements)
    lowest_second_minimum = second_elements[0]

    answer = lowest_first_minimum + sum_of_second_elements - lowest_second_minimum
    print(answer)
