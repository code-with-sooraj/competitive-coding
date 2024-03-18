//product of two numbers
#include<stdio.h>
int product(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int mul=product(a,b);
    printf("%d",mul);
    return 0;
}
int product(int a,int b)
{
    if(a<b)
    return product(b,a);
    else if(b!=0)
    return (a+product(a,b-1));
    else
    return 0;
}
