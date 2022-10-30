#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("positif");
    }
    if(n<0){
        printf("negatif");
    }
    if(n==0){
        printf("nol");
    }

    return 0;
}
