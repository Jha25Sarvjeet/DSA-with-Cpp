/*Given a binary array 'ARR' of size 'N', your task is to find the longest sequence of continuous 1’s
 that can be formed by replacing at-most 'K' zeroes by ones. Return the length of this longest sequence
  of continuous 1’s.*/
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int consecutive(int arr[], int k, int n)
{
    int i = 0;
    int j = 0;
    int k2 = 0;
    int ans = 0;
    while (j < n) // to check base case
    {

        if (arr[j] == 1) // if value is 1 move j to j++
        {
            j++;
        }
        else if (arr[j] == 0) // if value is 0 check for k2
        {
            if (k2 < k) // if k2 is less than k move k2 and j  both
            {
                j++;
                k2++;
            }
            else // if k2 is greater than k move i just next , next zero
            {
                ans = max(ans, j - i);//update answer
                //move i to next zero 
                while (i<j && arr[i] != 0)
                {

                    i++;
                }
                i++;

                k2--;  //decrementing count of zeroes
                // another approach to check

                // int c=0;
                // while (c<1)
                // {
                //     if(arr[i]==0){c++;
                //     }
                //     i++;
                // }
            }
        }
    }
    ans = max(ans, j - i);//update answer in last with value of i and j
    return ans;
}

int main()
{
    int arr[] = {1,1,1,0,0,0,1,1,1,1,0};
    int res = consecutive(arr, 2, 11);
    cout << res << endl;

    return 0;
}

