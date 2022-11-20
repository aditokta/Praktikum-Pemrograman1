#include <stdio.h>
#include <string.h>

int main()
{
    int  star=0, hastag=0, nilai1, nilai2, i;
    char kalimat1[50], kalimat2[50];
    scanf (" %[^\n]%*c", &kalimat1);
    scanf (" %[^\n]%*c", &kalimat2);
    nilai1= strlen(kalimat1);
    nilai2= strlen(kalimat2);

    if(nilai1!=nilai2){
        printf("\nPanjang kalimat berbeda, pesan palsu\n");
    }

    else{
        printf("\n");
        for(i=0; i< nilai1; i++){
            if(kalimat1[i]==kalimat2[i]){
                if(kalimat1[i]== ' '){
                    printf(" ");
                }
                else{
                    printf("*");
                    star++;
                }
            }
            else{
                printf("#");
                hastag++;
            }
        }
        printf ("\n* = %d", star);
        printf ("\n# = %d", hastag);

        if (star>=hastag){
            printf ("\nPesan Asli\n");
        }
        else{
            printf("\nPesan Palsu\n");
        }
    }
    return 0;
}
