#include <stdio.h>

int main()
{
    char a[50],b[50],c[50],d[50],e[50],f[50],g[50];
    printf("Nama                 : ");
    gets(a);
    printf("NIM                  : ");
    gets(b);
    printf("Kelas Pararel        : ");
    gets(c);
    printf("Tempat/Tanggal Lahir : ");
    gets(d);
    printf("Alamat               : ");
    gets(e);
    printf("Hobby                : ");
    gets(f);
    printf("No. Hp               : ");
    gets(g);
    printf("\n\n");

    printf("Nama                 : %s\n",a);
    printf("NIM                  : %s\n",b);
    printf("Kelas Pararel        : %s\n",c);
    printf("Tempat/Tanggal Lahir : %s\n",d);
    printf("Alamat               : %s\n",e);
    printf("Hobby                : %s\n",f);
    printf("No. Hp               : %s\n",g);

    return 0;
}
