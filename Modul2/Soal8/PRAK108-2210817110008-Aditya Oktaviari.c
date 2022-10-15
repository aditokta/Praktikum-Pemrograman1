#include <stdio.h>

int main()
{
    float keliling1=5, jarak=14, keliling2=jarak/keliling1, phi=3.14, jari=keliling2/(2*phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek Mengelilingi taman = %.f Putaran\n", keliling1);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jarak);
    printf("Jawaban : \nJari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari);

    return 0;
}
