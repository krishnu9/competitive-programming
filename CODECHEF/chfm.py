from math import inf
for _ in range(int(input())):
    n = int(input())
    A = list(map(int, input().strip().split()))[:n]
    s = sum(A)
    m = s / n
    for i in range(n):
        if A[i] == m:
            print(i)
            break
        print('Impossible')
