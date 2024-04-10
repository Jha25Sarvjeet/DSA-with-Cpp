/*Given a non-empty array of integers arr,
every element appears twice except for one.
 Find that single one.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// brute force approach
//  int nothatAppearOnce(int arr[],int n){
//      int count=0;
//      for(int i=0;i<n;i++){
//          for(int j=0;j<n;j++){
//              if(arr[i]==arr[j])
//                  count++;
//          }
//          if(count==1)
//              return arr[i];
//          else{
//              count=0;
//          }
//      }
//  }

// better approach 1
// int nothatAppearOnce(int arr[], int n)
// {
//     int maxi = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(arr[i], maxi);
//     }
//     vector<int>hash(maxi+1,0);
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1)
//             return arr[i];
//     }
// }

// better approach 2:- using map function

// int nothatAppearOnce(int arr[], int n)
// {
//     map<int,int>m;
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }
//     for(auto i:m){
//         if(i.second==1)
//             return i.first;
//     }
// }

// optimal approach

int nothatAppearOnce(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number that appears once  " << nothatAppearOnce(arr, n) << endl;

    return 0;
}