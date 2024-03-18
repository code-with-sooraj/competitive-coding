#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    return n>0 && __builtin_popcountll(n) == 1 && (n - 1) % 3 == 0;;
}
int main()
{
    int n;
    cin>>n;
    isPowerOfFour(n);
    return 0;
}
