import sys
def solve():
    t=int(input())
    for _ in range(t):
        n=int(input())
        a=list(map(int, input().split()))

        # First convert all 1s to 2s
        for i in range(n):
            if a[i]==1:
                a[i]=2
        
        # Handle adjacent elements
        for i in range(n-1):
            # If current element is 2 and next is even, make next odd
            if a[i]==2 and a[i+1]%2==0:
                a[i+1]+=1
            # If next element is divisible by current, increment next
            elif a[i+1]%a[i]==0:
                a[i+1]+=1
                # If after incrementing, it's still divisible, increment again
                if a[i+1]%a[i]==0:
                    a[i+1]+=1
        print(' '.join(map(str, a)))

input = sys.stdin.readline
solve()