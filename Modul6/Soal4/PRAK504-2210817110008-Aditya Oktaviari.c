#include <stdio.h>
int reverse(int A){
    int rev=0;
    while(A!=0){
        rev=rev*10;
        rev=rev+A%10;
        A= A/10;
    }
    return rev;
}


int main() {
int A, B;
scanf("%d %d",&A,&B);
A=reverse(A);
B=reverse(B);
int C = A+B;
printf("%d",reverse(C));
}
