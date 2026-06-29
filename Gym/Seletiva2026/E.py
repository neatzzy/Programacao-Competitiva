from math import ceil

def fun(m):
    return m * (m+1) * (m+2) * (m+3)

n = int(input())

target = n * n - 1
l = 0
r = int(n**0.5) + 2
flag = False

while l < r:
    mid = ceil((l + r) / 2)
    fn = fun(mid)

    if fn == target:
        print(mid)
        flag = True
        break
    elif fn > target:
        r = mid - 1
    else:
        l = mid 

if not flag:
    print(-1)