n = input()
s = input()

mv = {
            'E' : -1,
            'C' : 0,
            'D' : 1
            }

pos = 0
ans = 0

for i in s:
    if abs(pos - mv[i]) <= 1:
        pos = mv[i]
        ans = ans + 1
    else:
        pos = 0

print(ans)