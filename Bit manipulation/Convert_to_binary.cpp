#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int convertToBinary(int n){
    int ans=0;
    int p=1;
    while(n>0){
    int last=(n&1);
    ans+=p*last;
    p=p*10;
    n=n>>1;
    }
    return ans;
}
int main()
{

    int n;
    cin>>n;
    int res=convertToBinary(n);
    cout<<res;
    return 0;
}
