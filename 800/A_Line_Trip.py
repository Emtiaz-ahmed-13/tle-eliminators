def solve():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        points = list(map(int, input().split()))
        
        point_arr = [0] + points + [x]

        max_distance = 0
        for i in range(1, len(point_arr)):
            diff = point_arr[i] - point_arr[i - 1]
            if i == len(point_arr) - 1:
                diff *= 2 
            max_distance = max(max_distance, diff)

        print(max_distance)

if __name__ == "__main__":
    solve()
