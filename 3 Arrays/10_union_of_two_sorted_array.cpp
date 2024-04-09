#include <iostream>
// #include <bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;
// brute force approach
//  vector<int> Union(vector<int> arr1, vector<int> arr2)
//  {
//      int n1 = arr1.size();
//      int n2 = arr2.size();
//     set<int>s;
//     for(int i=0;i<n1;i++){
//      s.insert(arr1[i]);
//     }
//     for(int i=0;i<n2;i++){
//      s.insert(arr2[i]);
//     }
//     vector<int>ans;
//     for(auto i:s){
//      ans.push_back(i);
//     }
//     return ans;
//  }
// optimal approach
vector<int> Union(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 & j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (ans.size() == 0 || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != arr2[j])
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    // remaining element of arr1
    while (i < n1)
    {

        if (ans.size() == 0 || ans.back() != arr1[i])
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }
    // remaining element of arr2

    while (j < n2)
    {

        if (ans.size() == 0 || ans.back() != arr2[j])
        {
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : arr2)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> result = Union(arr1, arr2);//function call 
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}