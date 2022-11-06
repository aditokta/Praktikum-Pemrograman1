i=int()
while(i != 5):
        print("Pilih program :")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")
        i=int(input("Masukkan pilihan : "))
        if(i>5 or i<=0):
            print("Input anda salah, silahkan coba lagi\n")
        
        elif(i==5):
            break
        
        else:
            a=float(input("Masukan Nilai Pertama : "))
            b=float(input("Masukan Nilai Kedua : "))
            if(i==1):
                print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n" % (a,b,a+b))
    
            elif(i==2):
                print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n" % (a,b,a-b))
            
            elif(i==3):
                print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n" % (a,b,a*b))
            
            elif(i==4):
                print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n" % (a,b,a/b))

print("Terimakasih telah menggunakan kalkulator Aditya Oktaviari")

