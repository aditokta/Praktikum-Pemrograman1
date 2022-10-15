#include <stdio.h>

int main()
{
    int a=400000, b=350000,sepatu_a= a-(a*13/100), sepatu_b= b-(b*21/100);

    printf("Harga sepatu A adalah %d\n",a);
    printf("Harga sepatu B adalah %d\n",b);
    printf("Sepatu A mendapat diskon 13%% sehingga menjadi %d\n",sepatu_a);
    printf("Sepatu B mendapat diskon 21%% sehingga menjadi %d",sepatu_b);

    return 0;

}
