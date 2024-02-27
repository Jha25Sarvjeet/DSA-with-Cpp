#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n)
{
    if (n == 0)
        return 0;
    else
    {
        return n + sumFirstN(n - 1);
    }
    //   return (n*(n+1))/2;  // usiung formula
}
int main()
{
    int n;
    cout<<"enter no"<<endl;
     cin>>n;
     cout<<sumFirstN(n)<<endl;

    return 0;
}