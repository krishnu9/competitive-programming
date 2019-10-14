from math import *
fib = [0,1,1]
for i in range(3,61):
    fib.append((fib[i-1]+fib[i-2])%10)
n = 2
de = {}
while(log10(n)<18):
    power2 = floor(log2(n))
    lowestpow2 = int(pow(2,power2))
    last_digit = fib[lowestpow2%60-1]
    de[n] = last_digit
    n=n*2
#print(de)
#print()
for _ in range(int(input())):
    num = int(input())
    power2 = floor(log2(num))
    lowestpow2 = int(pow(2,power2))
    print(de[lowestpow2])