ruangan= int(input())
zetsu= list(map(int, input().split()))
hasil= []

for i in range(0, ruangan):
    hasil.append(zetsu[i])

for i in range(0, ruangan):
    print(hasil[i]*(i+1), end=' ')