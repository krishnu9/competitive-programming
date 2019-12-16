for _ in range(int(input())):
    n = int(input())
    k = int(input())

    rem = k % n
    ans = 0

    if n % 2 == 0:
        if rem == n / 2:
            ans = n - 1
        elif rem < n / 2:
            ans = rem * 2
        elif rem > n / 2:
            ans = (n - rem) * 2

    if n % 2 != 0:
        if rem == n / 2 or rem == (n / 2) + 1:
            ans = n - 1
        if rem < n / 2:
            ans = rem * 2
        if rem > (n / 2) + 1:
            ans = (n - rem) * 2

    print(ans)
