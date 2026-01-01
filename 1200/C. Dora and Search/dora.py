import sys
input = sys.stdin.read
 
data = input().split()
index = 0
 
t = int(data[index]); index += 1
 
for _ in range(t):
    n = int(data[index]); index += 1
    arr = list(map(int, data[index:index+n])); index += n
 
    i, j = 0, n - 1
    low, high = 1, n  
 
    while i < j:
        if arr[i] == low or arr[i] == high:
            if arr[i] == low:
                low += 1
            else:
                high -= 1
            i += 1
            continue
 
        if arr[j] == low or arr[j] == high:
            if arr[j] == low:
                low += 1
            else:
                high -= 1
            j -= 1
            continue
 
        break
 
    if i < j:
        print(i+1, j+1)
    else:
        print(-1)
