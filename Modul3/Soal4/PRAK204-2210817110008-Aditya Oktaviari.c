#include <stdio.h>

int main()
{
    float r,t,v,l,k;
    printf("Jari-jari = ");
    scanf("%f",&r);
    printf("Tinggi Bejana = ");
    scanf("%f",&t);
    v=(22*r*r*t)/7;
    l=22*2*r*(r+t)/7;
    k=22*2*r/7;
    printf("\nVolume = %.2f\nLuas = %.2f\nKeliling = %.2f",v,l,k);

    return 0;
}
