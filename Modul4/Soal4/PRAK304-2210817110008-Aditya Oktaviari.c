#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n>0&&n<10){
        printf("Satuan");
    }
    if(n>=19&&n<100){
        printf("Puluhan");
    }
    if(n==0){
        printf("Nol");
    }
    if(n>=100){
        printf("Anda Menginput Melebihi Limit");
    }
    if(n>=10&&n<20){
        printf("Belasan");
    }
    return 0;
}
