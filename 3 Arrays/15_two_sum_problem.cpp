/*Two Sum : Check if a pair with given sum exists in Array*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// brute force approach
//  bool twoSumProblem(int arr[], vector<int> &ans, int sum, int n)
//  {
//      bool flag = false;
//      for (int i =0; i < n; i++)
//      {
//          for (int j = i + 1; j < n; j++)
//          {
//              if ((arr[i] + arr[j]) == sum)
//              {
//                  flag = true;
//                  ans.push_back(i);
//                  ans.push_back(j);
//                  break;
//              }
//          }
//          break;
//      }
//      return flag;
//  }

// better approach
//most optimal 
bool twoSumProblem(int arr[], vector<int> &ans, int sum, int n)
{
    bool flag = false;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int remain = sum - a;
        if (mpp.find(remain) != mpp.end())
        {
            ans.push_back(mpp[remain]);
            ans.push_back(i);
            return true;
        }
        mpp[arr[i]] = i;
    }

    ans.push_back(-1);
    ans.push_back(-1);
    return false;
}

// optimal approach
// it's only for the Yes or NO
// bool twoSumProblem(int arr[], int sum, int n)
// {
//     int i = 0;
//     int j = n - 1;
//     sort(arr, arr + n);
//     while (i <= j)
//     {
//         if ((arr[i] + arr[j]) == sum)
//         {

//             return true;
//         }
//         else if ((arr[i] + arr[j]) < sum)
//         {
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }

//     return false;
// }

int main()
{
    int arr[] = {2, 6, 5, 8, 10};
    int target = 13;
    vector<int> ans;
    bool result = twoSumProblem(arr,ans ,target, 5);
    if (result)
    {
        cout << "YES" << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
    {
        cout << "NO" << endl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }

    return 0;
}