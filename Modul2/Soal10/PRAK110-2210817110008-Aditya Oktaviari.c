#include<stdio.h>
int main()
{
    int alas=5, tinggi=12, b=sqrt(5*5)+sqrt(12*12), luas=5*12/2, keliling=alas+tinggi+b ;
    printf("Diketahui : \nAlas = %d cm\nTinggi = %d cm\n", alas, tinggi);
    printf("\nJawab :\n");
    printf("Sisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\nKeliling = %d cm\nLuas = %d cm", alas, b, tinggi, keliling, luas);

    return 0;
}
