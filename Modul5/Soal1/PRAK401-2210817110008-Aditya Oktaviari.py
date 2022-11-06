a, b=input().split()
a=int(a)
b=(b)

for i in range(1,51):
    if (i%a == 0):
        print(b,end=" ")
    else :
        print(i,end=" ")