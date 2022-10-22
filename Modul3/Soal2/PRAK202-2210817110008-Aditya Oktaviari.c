#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Masukan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukan Nilai Kedua : ");
    scanf("%f", &b);
    c=a+b;
    printf("Hasil dari penjumlahan niali pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",a,b,c);

    return 0;
}
