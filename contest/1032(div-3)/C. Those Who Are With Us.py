import sys

def solve():
    n, m = map(int, sys.stdin.readline().split())
    matrix = []
    max_val = 0
    for _ in range(n):
        row = list(map(int, sys.stdin.readline().split()))
        matrix.append(row)
        max_val = max(max_val, max(row))

    max_coords = []
    rows_with_M = set()
    cols_with_M = set()

    for r in range(n):
        for c in range(m):
            if matrix[r][c] == max_val:
                max_coords.append((r, c))
                rows_with_M.add(r)
                cols_with_M.add(c)

    if len(rows_with_M) == 1 or len(cols_with_M) == 1:
        sys.stdout.write(str(max_val - 1) + "\n")
        return


    can_be_M_minus_1 = False
    for r_cand in rows_with_M:
        cols_outside_r_cand = set()
        current_r_cand_works = True
        for r_m, c_m in max_coords:
            if r_m != r_cand:
                cols_outside_r_cand.add(c_m)
                if len(cols_outside_r_cand) > 1:
                    current_r_cand_works = False
                    break
        if current_r_cand_works:
            can_be_M_minus_1 = True
            break
    
    if can_be_M_minus_1:
        sys.stdout.write(str(max_val - 1) + "\n")
        return


    for c_cand in cols_with_M:
        rows_outside_c_cand = set()
        current_c_cand_works = True
        for r_m, c_m in max_coords:
            if c_m != c_cand:
                rows_outside_c_cand.add(r_m)
                if len(rows_outside_c_cand) > 1:
                    current_c_cand_works = False
                    break
        if current_c_cand_works:
            can_be_M_minus_1 = True
            break
    
    if can_be_M_minus_1:
        sys.stdout.write(str(max_val - 1) + "\n")
    else:

        sys.stdout.write(str(max_val) + "\n")

num_test_cases = int(sys.stdin.readline())
for _ in range(num_test_cases):
    solve()