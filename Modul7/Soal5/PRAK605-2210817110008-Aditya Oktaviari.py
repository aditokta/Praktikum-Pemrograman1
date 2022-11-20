ordo= int(input())
print("Matriks A")
matriks1= []  
matriks2= []
for a in range(0, ordo):
    nilai1= list(map(int, input().split()))
    matriks1.append(nilai1[0 : ordo])

print("\nMatriks B")
for i in range(0, ordo):
    nilai2= list(map(int, input().split()))
    matriks2.append(nilai2[0 : ordo])
print("\nMatriks AxB")

for i in range(0, ordo):
    for j in range(0, ordo):
        hasil= 0
        for c in range(0, ordo):
            hasil += matriks1[i][c]*matriks2[c][j]
        print(hasil, end=' ')
    print()