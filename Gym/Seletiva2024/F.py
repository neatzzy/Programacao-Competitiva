pai, mae, filho = input().split()
flag = True

for i in range(5):
    if filho[i] != pai[i] and filho[i] != mae[i]:
        print("Orra meu...")
        flag = False
        break

if flag == True:
    print("Herdou!")