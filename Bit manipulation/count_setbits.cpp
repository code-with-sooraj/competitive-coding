#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int makeZero(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);//it will remove the last set bit 
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int res=makeZero(n);
    cout<<res;
    return 0;
}
