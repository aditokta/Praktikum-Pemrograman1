#include <stdio.h>

int main()
{
    int a, b, i, j, nilai;
    scanf("%d%d", &a, &b);
    int matriks[a][b];
    for (i=0; i<a; i++){
        for (j=0; j<b; j++){
            scanf("%d", &nilai);
            matriks[i][j]=nilai;
        }
    }
    printf("\n");

    for (i=0; i<a; i++){
        for (j=0; j<b; j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;

}
