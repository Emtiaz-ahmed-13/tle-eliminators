def min_operations(n: str, possible_value: str) -> int:
    operations = 0
    checker_index = len(possible_value) - 1  
    for i in range(len(n) - 1, -1, -1):
        if n[i] == possible_value[checker_index]:
            checker_index -= 1
            if checker_index < 0:
                break
        else:
            operations += 1
    if checker_index >= 0:
        operations = float('inf') 
    return operations

t = int(input())
for _ in range(t):
    n = input()
    possible_values = ["00", "25", "50", "75"]
    ans = float('inf')
    for possible_value in possible_values: 
        ans = min(ans, min_operations(n, possible_value))
    print(ans)

