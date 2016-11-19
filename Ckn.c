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
    int n,k,kq2;
    printf("Nhap n");
    scanf("%d",&n);
    printf("Nhap k");
    scanf("%d",&k);
    kq2=(giai_thua(n)/(giai_thua(k)*giai_thua(n-k)));
    printf("%dC%d= %d ",k,n,kq2);

}
