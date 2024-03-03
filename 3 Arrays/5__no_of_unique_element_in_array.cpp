#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    int l = 1;

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] != arr[i + 1])
            l++;
    }

    return l;
}

int main()
{   vector<int>v={1,2,2,2,3};
int ans=removeDuplicates(v,5);
cout<<"no of unique element in array "<<ans;

    return 0;
}