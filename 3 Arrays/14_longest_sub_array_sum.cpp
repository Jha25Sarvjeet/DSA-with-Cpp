/*Longest Subarray with given Sum K(Positives)
Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// brute force approach:- N^3 (CAN BE OPTIMIZE TO N^2)
//  int longestsubarray(int arr[], int k, int n)
//  {
//      int maxi = 0;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i; j < n; j++)
//          {
//              int s = 0;
//              for (int k = i; k <= j; k++)
//              {
//                  s = s + arr[k];
//              }
//              if (s == k)
//              {
//                  maxi = max(maxi, j - i + 1);
//              }
//          }
//      }
//      return maxi;
//  }

// brute force approach  with n square

int longestsubarray(int arr[], int k, int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {   int s=0;
        for (int j = i; j < n; j++)
        {
            s=s+arr[j];
            if (s == k)
            {
                maxi = max(maxi, j - i + 1);
            }
        }
    }
    return maxi;
}
           
int main()
{
    int arr[] = {2, 3, 5};
    int k = 5;
    int n = 3;
    cout << "length of longest subarray with sum " << k << " is  " << longestsubarray(arr, k, n);

    return 0;
}