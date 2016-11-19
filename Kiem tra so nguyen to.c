#include <stdio.h>
main()
{
    int scx,i,k=0;
    printf("Nhap so can xet ");
    scanf("%d",&scx);
    for (i=1;i<=scx;i++)
        if (scx%i==0) k++;
    if (k<=2) printf("so nguyen to");
    else printf("khong phai so nguyen to");

}
