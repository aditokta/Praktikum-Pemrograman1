def hitung(nilai1, nilai2):
    return nilai1-nilai2

def mutlak(angka):
    return abs(angka)
    
a,c,b,d=input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)
Hasil = hitung(a,b) + hitung(c,d)
Hasil=int(Hasil)
print(mutlak(Hasil))
