import math
mod = 10**9 + 7

for _ in range(int(input())):
    N, k = map(int, input().strip().split())

    l = (k - 1)

    d = (N - 1)

    n = int(l / d) + 1

    a = l % d

    sum = n * (a + l)
    sum = (sum * 500000004) % mod

    print(int(sum))
