#include <stdio.h>

int main (void)
{
    int i;
    float a, b;
    while(i != 5){
        printf("Pilih program :\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &i);
        if(i>5 || i<=0){
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
        else if(i==5){
            break;
        }
        else{
            printf("Masukan Nilai Pertama : ");
            scanf("%f", &a);
            printf("Masukan Nilai Kedua : ");
            scanf("%f", &b);
            if(i==1){
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n",a,b,a+b);
            }
            else if(i==2){
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n",a,b,a-b);;
            }
            else if(i==3){
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n",a,b,a*b);
            }
            else if(i==4){
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n",a,b,a/b);
            }
        }
    }
    printf("Terimakasih telah menggunakan kalkulator Aditya Oktaviari");
}
