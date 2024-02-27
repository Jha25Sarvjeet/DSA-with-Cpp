/*You are given an integer ‘n’.
Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> printNos(int x)
{

    if (x < 1)
    {
        return {};
    }
    else
    {
        vector<int> ans=printNos(x - 1);
        ans.push_back(x);
        return ans;
    }
}
int main()
{
    int a;
    cout << "enrter a number" << endl;
    cin >> a;
    vector<int>ans=printNos(a);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
