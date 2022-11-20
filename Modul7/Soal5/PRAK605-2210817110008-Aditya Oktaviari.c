#include <stdio.h>

int main()
{
    int ordo, nilai, hasil, i, j, a;
    scanf("%d", &ordo);
    int matriks1[ordo][ordo], matriks2[ordo][ordo];
    printf("\nMatriks A\n");

    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++){
            scanf("%d", &nilai);
            matriks1[i][j]=nilai;
        }
    }
    printf("\nMatriks B\n");

    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++) {
            scanf("%d", &nilai);
            matriks2[i][j]=nilai;
        }
    }
    printf("\nMatriks AxB\n");

    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++){
            for(a=0, hasil=0; a<ordo; a++){
                hasil += matriks1[i][a]*matriks2[a][j];
            }
            printf("%d ", hasil);
        }
        printf("\n");
    }
    return 0;
}
