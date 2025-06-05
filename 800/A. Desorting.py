t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    operatioins=float('inf')
    for i in range(n-1):
        if a[i] <= a[i+1]:
            diff = a[i+1] - a[i]
            required_operations =  diff //2 +1
            operations = min(operations, required_operations)
        else:
            operations =0
    print(operations)