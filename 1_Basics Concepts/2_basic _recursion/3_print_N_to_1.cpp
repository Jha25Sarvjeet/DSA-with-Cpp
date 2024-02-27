#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int n, vector<int> &v)
{
    if (n < 1)
        return;
    else
    {
        v.push_back(n);
        print(n - 1, v);
    }
}
vector<int> printNos(int x)
{

    vector<int> ans;
    print(x, ans);
    return ans;
}
int main()
{
    int a;
    cout<<"ENTER NUMBER"<<endl;
    cin>>a;
    vector<int>ans=printNos(a);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";


    return 0;
}
