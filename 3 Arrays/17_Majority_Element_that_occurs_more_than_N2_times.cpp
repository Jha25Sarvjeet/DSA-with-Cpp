/*Majority Element that occurs more than N/2 times*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ElementThatOccursMoreThanHalfTimes(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
            return arr[i];
    }
    return -1;
}
int main()
{   int nums[] = {2,2,1,1,1,2,2};
    int ans=ElementThatOccursMoreThanHalfTimes(nums,7);
    cout<<"mazority element in array is :- "<<ans<<" ";

    return 0;
}



