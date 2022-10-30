#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);

    if(a>=84600){
        b=a/(24*3600);
        a=a%(24*3600);
        c=a/3600;
        a%=3600;
        e=a/60;
        a%=60;
        d=a;
        printf("%d hari %02d:%02d:%02d",b,c,e,d);
    }

    else if(a<84600 && a>=0){
        c=a/3600;
        a%=3600;
        e=a/60;
        a%=60;
        d=a;
        printf("%02d:%02d:%02d", c,e,d);
    }
    return 0;
}
