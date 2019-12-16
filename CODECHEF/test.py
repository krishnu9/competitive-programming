for _ in range(int(input())):
    #n, k = map(int, input().strip().split())
    k = int(input("Enter K: "))
    n = int(input("Enter N: "))
    ap = [k-1]

    srcs = [x for x in range(k, k+n)]
    print('elements : ' + str(srcs))

    print(str(1) + ' -> ' + str(k-1) + ' = ' + str(k-1))
    #sum = k-1
    small, large = srcs[0], srcs[-1]
    i = 1
    while((large*i+1) < (small*(i+1)-1) + 1):
        print(str(large*i+1) + ' -> ' + str(small*(i+1)-1) +
              ' = ' + str((small*(i+1)-1)-(large*i+1)+1))
        ap.append((small*(i+1)-1)-(large*i+1)+1)
        i = i + 1

    print(ap)
