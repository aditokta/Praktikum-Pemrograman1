a,b=input().split()
a=int(a)
b=int(b)
list_masuk=range(1, a +1)
list_data=list(list_masuk)
hasil3=0
for i in list_data :
    hasil1 = 0 
    hasil2 = 0
    for n in reversed(range(i)) :
        if (n==0) :
            print(f"({n+1} * {b})", end="")
            hasil2=(n+1) * b
            hasil1+=hasil2
        else :
            print(f"({n+1} * {b}) + ", end="")
            hasil2=(n+1)*b
            hasil1+=hasil2
    print(f" = {hasil1}")
    hasil3+=hasil1
print(hasil3)