t=int(input())
dy=[-1, 1, -1, 1]
dx=[-1,-1,1,1]

for _ in range(t):
    a,b=map(int,input().split())
    x_king,y_king=map(int,input().split())
    x_queen,y_queen=map(int,input().split())

    king_hits=set()
    queen_hits=set()

    for j in range(4):
        king_hits.add((x_king + dx[j] * a, y_king + dy[j] * b))
        king_hits.add((x_king + dx[j] * b, y_king + dy[j] * a))

        queen_hits.add((x_queen + dx[j] * a, y_queen + dy[j] * b))
        queen_hits.add((x_queen + dx[j] * b, y_queen + dy[j] * a))
    
    ans=sum(1 for pos in king_hits if pos in queen_hits)
    print(ans)