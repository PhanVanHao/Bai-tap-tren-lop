#include <stdio.h>
#include <math.h>
int giai_thua  (int x)
{
    int i,kq=1;
    for (i=1;i<=x;i++)
        kq=kq*i;
    return(kq);
}
main()
{
    int s,kq2;
    printf("Nhap so : ");
    scanf("%d",&s);
    kq2=giai_thua(s);
    printf("\n%d!=%d",s,kq2);
}
