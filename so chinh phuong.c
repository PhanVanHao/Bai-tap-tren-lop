#include <math.h>
#include <stdio.h>
main()
{
    int scx,t;
    printf("Nhap so can xet : ");
    scanf("%d",&scx);
    t=sqrt(scx);
    if ((t*t)==scx) printf("\nso chinh phuong");
    else printf ( "\nkhong phai so chinh phuong ");

}
