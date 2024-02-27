/*to finf GCD of to number*/
#include <iostream>
using namespace std;
int calcGCD(int n, int m)
{
    // First approach*********************************************
    // int gcd=0;
    // int i=1;

    // while(i<=n && i<=m){
    //     if(n%i==0 && m%i==0){
    //         gcd=i;
    //     }
    //     i++;
    // }
    // return gcd;

    // second approach using recursion****************************
    // if (n == 0)
    // {
    //     return m;
    // }
    // else if (m == 0)
    // {
    //     return n;
    // }
    // else
    // {
    //     if (n > m)
    //     {
    //         calcGCD(n - m, m);
    //     }
    //     else
    //         calcGCD(n, m - n);
    // }
    //******************************Iteratyive approach*******************
    if (n == 0)
    {
        return m;
    }
    else if (m == 0)
    {
        return n;
    }
    else
    {
        while (n != m)
        {
            if (n > m)
            {
                n=n-m;
            }
            else
               m=m-n;
        }
    }
}
int main()
{
    int a, b;
    cout << "enter two number";
    cin >> a;
    cin >> b;
    int ans = calcGCD(a, b);
    cout << "gcd of the two number is\t" << ans;

    return 0;
}