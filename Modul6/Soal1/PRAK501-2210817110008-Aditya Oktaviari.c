#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d)
{
    int max;
    if(a>b && a>c && a>d){
        max=a;
    }
    else if(b>a && b>c && b>d){
        max=b;
    }
    else if(c>b && c>a && c>d){
        max=c;
    }
    else if(d>b && d>c && d>a){
        max=d;
    }
}

int main() {
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
int hasil = MaxBilangan(a, b, c, d);
printf("%d", hasil);
return 0;
}
