/*You are given an integer ’n’.
Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if (n == 1)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}
vector<long long> factorialNumbers(long long n)
{

    vector<long long> ans;
    for (int i = 1; i <= n; i++)
    {
        long long temp = fact(i);
        if (temp <= n)
        {
            ans.push_back(temp);
        }
        else
        {
            break;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    vector<long long >ans=factorialNumbers(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}