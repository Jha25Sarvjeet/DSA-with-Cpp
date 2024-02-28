#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
{   //  first  approach********************************
    // int max=arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max)
    //         max=arr[i];
    // }
    // return max;
    // second approach*********************************
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

int main()
{
    vector<int> arr={2,9,0,-8,-6,8,4,3};
    cout<<"maximum element   "<<largestElement(arr,arr.size());

    return 0;
}