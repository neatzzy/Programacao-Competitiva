s = input().split()

s = [i.lower() for i in s]

if 'athletico' in s or 'furacao' in s or 'athletico!' in s or 'furacao!' in s:
    print("E da-lhe Athletico!")
else:
    print("Grrrrr! CAP! CAP! CAP!")