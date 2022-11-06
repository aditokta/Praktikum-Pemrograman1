#include <stdio.h>

int main (void)
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    if(a > b){
        for(c=a, d=b; c>=b, d<=a; c--, d++){
            printf("%d %d", c, d);
            if(c == b){
                break ;
            }
            else{
                printf(" - ");
            }
        }
    }
    else{
        for(c=a, d=b; c<=b, d>=a; c++, d--){
            printf ("%d %d", c, d);
            if (c==b){
                break ;
            }
            else{
                printf (" - ");
            }
        }
    }
}
