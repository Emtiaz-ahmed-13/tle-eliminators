def solve():
    t=int(input())
    for _ in range(t):
        n,k=map(int,input().split())
        a=list(map(int,input().split()))

        copy_a = sorted(a)

        if a ==copy_a or k>1:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    solve()