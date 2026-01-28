# cook your dish here
import sys
input = sys.stdin.read

def solve():
    data = input().split()
    if not data: return
    
    t = int(data[0])
    curr = 1
    
    for _ in range(t):
        n = int(data[curr])
        a = list(map(int, data[curr+1 : curr+1+n]))
        curr += 1 + n
        
        if n == 1:
            print(1)
            continue
            
        target = n
        if a[0] == n:
            target = n - 1
            
        pos = a.index(target)
        r = pos if pos == n - 1 else pos - 1
        
        best_p = []
        for l in range(r + 1):

            res = a[:l] + a[l:r+1][::-1] + a[r+1:]
            if not best_p or res > best_p:
                best_p = res
                
        print(*(best_p))

solve()