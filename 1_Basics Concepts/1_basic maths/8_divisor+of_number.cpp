#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;



int* printDivisors(int n, int &size){
    int *ans = new int[n];
    int c = 0;
    for (int i = 1; i <= std::sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans[c] = i;
            c++;
            if (i != n / i)
            {
                ans[c] = n / i;
                c++;
            }
        }
    }
   

    // Now, we need to allocate an array to return
    sort(ans, ans + c);
    size=c;
    return ans;
}


int main()
{
    int * ans;
    int n;
    ans=printDivisors(5,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<< "  ";
    }


    return 0;
}
