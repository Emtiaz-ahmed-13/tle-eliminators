n=int(input())
a=list(map(int,input().split()))

minimum_operations=float('inf')

for num in a:
    minimum_operations=min(minimum_operations,abs(num))

print(minimum_operations)