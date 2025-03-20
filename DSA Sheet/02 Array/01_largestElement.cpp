#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int largestElement(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxi)maxi=arr[i];
    }
    return maxi;
}
int main()
{
    int arr[]={1,8,7,56,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=largestElement(arr,n);
    cout<<"largest element is "<<maxi<<endl;
}