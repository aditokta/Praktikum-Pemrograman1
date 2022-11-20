a, b= map(int, input().split())
nilai= list(map(int, input().split()))
matriks = []

for i in range(0, a*b, b):
    matriks.append(nilai[i : i + b])
print(" ")

for i in range(a):
    for j in range(b):
        print(matriks[i][j], end=' ')
    print()