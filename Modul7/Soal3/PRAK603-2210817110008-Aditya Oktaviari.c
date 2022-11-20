#include <stdio.h>

int main()
{
    int n1, n2, isi, i;
    scanf("%d %d", &n1, &n2);
    int nilai1[n1], nilai2[n2];

    if(n1 != n2){
        printf("\nJumlah tidak sama");
    }

    else{
        for(i=0; i<n1; i++){
            scanf("%d", &isi);
            nilai1[i]=isi;
        }
        for(i=0; i<n2; i++){
            scanf("%d", &isi);
            nilai2[i]=isi;
        }
        printf("\n");
        for(i=0; i<n1; i++){
            printf("%d ", nilai1[i]*nilai2[i]);
        }
    }
    return 0;
}
