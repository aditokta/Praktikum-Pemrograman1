a=int(input())
if(a>=84600):
    b=a/(24*3600)
    a=a%(24*3600)
    c=a/3600
    a%=3600
    e=a/60
    a%=60
    d=a    
    print("%d hari %02d:%02d:%02d" % (b, c, e, d))  
 
elif(a<84600 and a>=0):
    c=a/3600
    a%=3600
    e=a/60
    a%=60
    d=a
    print("%02d:%02d:%02d" % (c,e,d))