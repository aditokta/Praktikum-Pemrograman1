def reverse(A):
    rev=0
    while(A):
        rev=rev*10
        rev=rev+A%10
        A //=10
    return rev

A,B=input().split()
A=int(A)
B=int(B)
A=reverse(A)
B=reverse(B)
C = A+B
print(reverse(C))

