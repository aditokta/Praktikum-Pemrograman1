#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, alas, keliling, luas, hasil;
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    alas= sqrt(pow((b), 2) - pow((a), 2) );
    keliling= a+b+alas;
    luas = (alas*a)/2;
    printf ("\nAlas = %d cm\n", alas);
    printf ("Tinggi = %d cm\n", a);
    printf ("Keliling = %d cm\n", keliling);
    printf ("Luas = %d cm^2\n", luas);
    return 0;
}
