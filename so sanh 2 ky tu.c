#include <stdio.h>
main()
{
    char x,y,temp;
    int tx,ty;
    printf("Nhap ky tu 1 : ") ;
    scanf("%c",&x);
    scanf("%c",&temp);
    printf("Nhap ky tu 2 : ") ;
    scanf("%c",&y);
    tx=x;
    ty=y;
    if (tx>ty) printf("%c lon hon %c ",x,y);
    else if (tx==ty) printf("%c bang %c ",x,y);
    else printf("%c nho hon %c ",x,y);

}
