import math
mod = 10**9 + 7


def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)


def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        raise Exception('modular inverse does not exist')
    else:
        return x % m


for _ in range(int(input())):
    n, k = map(int, input().strip().split())

    l = (k - 1) % mod

    d = (n - 1) % mod

    nt = int((l % mod * modinv(d, mod)) % mod) + 1

    sum = (nt * ((2 * l) % mod - ((nt - 1) * d) % mod)) % mod
    sum = (sum * 500000004) % mod

    print(sum)
