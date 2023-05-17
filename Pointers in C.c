#include <stdio.h>

int main()
{
    int a,b,x,y,aa,bb;
    scanf("%d", &a);
    scanf("%d", &b);
    x=a+b;
    y=a-b;
    if (x<0)
    {
        aa=x*-1;
        printf("%d",aa);
    }
    else
    {
        printf("%d",x);
    }
    
    
    if (y<0)
    {
        bb=y*-1;
        printf("\n%d",bb);
    }
    else
    {
        printf("\n%d",y);
    }
    return 0;
}
