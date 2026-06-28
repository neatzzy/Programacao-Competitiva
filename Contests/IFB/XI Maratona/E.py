n = int(input())
v = [0] * 5

for i in range(n):
    s = input()
    if s == "PIP":
        print(*v)
    else:
        for j in range(5):
            if s[j] == '*':
                v[j] += 1
