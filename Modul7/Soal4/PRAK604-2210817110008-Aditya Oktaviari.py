kalimat1= input() 
kalimat2= input()
nilai1= len(kalimat1) 
nilai2= len(kalimat2)
star= 0 
hastag= 0

if(nilai1 != nilai2):
    print("\nPanjang kalimat berbeda, pesan palsu")
else:
    print()
    for a in range(0, nilai1):
        if(kalimat1[a] == kalimat2[a]):
            if(kalimat1[a] == ' '):
                print(" ", end='')
            else:
                print("*", end='')  
                star += 1
        else:
            print("#", end='')  
            hastag += 1
    
    print("\n* =", star)
    print("# =", hastag)
    if star >= hastag :
        print("Pesan Asli")
    else :
        print("Pesan Palsu")