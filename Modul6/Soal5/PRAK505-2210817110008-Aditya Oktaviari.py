def Biodata( tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur=tahun_sekarang-tahunLahir
    tahun_sekarang=int(tahun_sekarang)
    umur=int(umur)
    print("Perkenalkan Nama Saya : %s"%(Namaku))
    print("Umur Saya : %d"%(umur))
    print("Saya Adalah Angkatan : %d"% (tahun_sekarang))
    print("Asal Saya Dari : %s"% (Asal))
    
tahunLahir=input()
tahunLahir=int(tahunLahir)
Namaku=input()
Namaku=str(Namaku)
Asal=input()
Asal=str(Asal)

Biodata(tahunLahir, Namaku, Asal)
