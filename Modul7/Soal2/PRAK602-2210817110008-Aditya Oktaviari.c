#include <stdio.h>

int main()
{
    int ruangan, zetsu, i;
    scanf("%d", &ruangan);
    int angka[ruangan];

    for(i=0; i<ruangan; i++){
        scanf("%d", &zetsu);
        angka[i]=zetsu;
    }

    for(i=0; i<ruangan; i++){
        printf ("%d ", angka[i]*(i+1));
    }
    return 0;
}
