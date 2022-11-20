n1, n2= map(int, input().split())
angka1= [] 
angka2= []

if(n1 != n2):
    print("\nJumlah tidak sama")

else:
    nilai1= list(map(int, input().split()))
    nilai2= list(map(int, input().split()))
    print()
    for i in range(0, n1):
        angka1.append(nilai1[i])

    for i in range(0, n2):
        angka2.append(nilai2[i])
        
    for i in range(0, n1):
       print(angka1[i]*angka2[i], end=' ')
      