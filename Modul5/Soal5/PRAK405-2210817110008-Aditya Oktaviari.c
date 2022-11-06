#include <stdio.h>

int main(void)
{
    int a,b,c=0,x=0,y=0,i,j;
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++){
        c=i*b;
        x+=c;
        printf("(%d * %d)",i,b);
        if(i==1){
            printf(" = %d",x);
            y+=x;
            printf("\n");
        }
        if(i!=1){
            for(j=i-1; j>=1; j--){
                if(j!=0){
                    printf(" + ");
                    printf("(%d * %d)",j,b);
                }
                if(j==1){
                    printf(" = %d",x);
                    y+=x;
                }
            }
            printf("\n");
        }
    }
    printf("%d",y);
}
