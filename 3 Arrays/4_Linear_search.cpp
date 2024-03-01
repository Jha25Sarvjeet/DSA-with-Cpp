#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
vector<int >v={2,1,9,6,8,7,4,5,3,2,0};
int ans=linearSearch(v.size(),8,v);
if(ans>=0){
    cout<<"element found at "<<ans<<"  index";
}
else{
    cout<<"not found"<<endl;
}

    return 0;
}