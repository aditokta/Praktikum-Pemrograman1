x,y=input().split()
x=int(x)
y=int(y)
if(x>y):
    i=x;j=y
    while(i>=y and j<=x):
        print("%d %d" % (i,j), end='')
        if(i==y):
            break
        else:
            print(" - ", end='')
        i-=1;j+=1
else:
    i=x;j=y
    while(i<=y and j>=x):
        print("%d %d" % (i,j), end='')
        if(i==y):
            break
        else:
            print(" - ", end='')
        i+=1;j-=1 
