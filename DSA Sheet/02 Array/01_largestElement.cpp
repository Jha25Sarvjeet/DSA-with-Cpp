#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// int largestElement(int arr[], int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>maxi)maxi=arr[i];
//     }
//     return maxi;
// }


//recursive approach

// int largestElement(int arr[], int j,int n,int maxi)
// {   if(j>=n)return maxi;
//     maxi= max(maxi,arr[j]);
//     largestElement(arr,j+1,n,maxi);
// }

//3rd approach
int largestElement(int arr[],int n)
{   sort(arr,arr+n);

    return arr[n-1];
}

int main()
{
    int arr[]={1,8,7,56,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int maxi=largestElement(arr,0,n,INT_MIN);
    int maxi=largestElement(arr,n);
    

    cout<<"largest element is "<<maxi<<endl;
}