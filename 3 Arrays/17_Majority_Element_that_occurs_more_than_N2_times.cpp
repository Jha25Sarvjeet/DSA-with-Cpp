/*Majority Element that occurs more than N/2 times*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// brute force approach
//  int ElementThatOccursMoreThanHalfTimes(int arr[], int n)
//  {

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > (n / 2))
//             return arr[i];
//     }
//     return -1;
// }

// better approach
// int ElementThatOccursMoreThanHalfTimes(int arr[], int n)
// {

//     map<int, int> mpp ;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for(auto i:mpp){
//         if(i.second>n/2){
//             return i.first;
//         }
//     }
//     return -1;

// }
// optimal approach:-Moore's Voting Algorithm

int ElementThatOccursMoreThanHalfTimes(int arr[], int n)
{

    int element;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count=1;
            element=arr[i];
        }
        else if(arr[i]==element)
            count++;
        else{
            count--;
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element)
            c++;
    }
    if(c>n/2)
        return element;
    else{
        return -1;
    }
}

int main()
{
    int nums[] = {3, 2, 1, 3, 3, 1, 3};
    int ans = ElementThatOccursMoreThanHalfTimes(nums, 7);
    cout << "mazority element in array is :- " << ans << " ";

    return 0;
}
