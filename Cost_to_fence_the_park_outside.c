#include<stdio.h>
int main()
{
    int L,B,W,C,Cost,area,nl,nb,nar,tar;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=L*B;
    nl=L+(2*W);
    nb=B+(2*W);
    nar=nl*nb;
    tar=nar-area;
    Cost=C*tar;
    printf("%d",Cost);
}