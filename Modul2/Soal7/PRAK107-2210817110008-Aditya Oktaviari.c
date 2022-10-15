#include <stdio.h>

int main()
{
    int s1=4, s2=5, s3=7, tanah=85000, keliling=s1+s2+s3;
    printf("Diketahui : \nPanjang sisi segitiga berturut-turut adalah %d,%d,dan %d\n", s1,s2,s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\nHarga tanah Permeter adalah %d\n",keliling, tanah);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek Adalah : Rp %d", tanah*keliling);

    return 0;
}
