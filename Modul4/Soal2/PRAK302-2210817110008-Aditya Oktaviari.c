#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a>=80){
        printf("A");
    }
    if(a>=70 && a<80){
        printf("B");
    }
    if(a>=60 && a<70){
        printf("C");
    }
    if(a>=50 && a<60){
        printf("D");
    }
    if(a<50){
        printf("E");
    }

    return 0;
}
