#include <stdio.h>
#include<math.h>
void call(int*,int*);
int main()
{
    int a,b;
    int *p,*r;
    p=&a;
    r=&b;
    scanf("%d%d",&a,&b);
    call(p,r);
    printf("%d\n%d",a,b);
}
call(int *p,int *r)
{
    int c,d;
    c=*p;
    d=*r;
    *p=c+d;
    *r=abs(c-d);
}
