
#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int fib[n];
    fib[0]=1;
    fib[1]=2;
    for(long long int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("%lld",fib[n-1]);

    return 0;
}
