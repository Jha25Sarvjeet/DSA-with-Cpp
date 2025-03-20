#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// brutre force

// int secondLargest(int arr[],int n){
//     sort(arr,arr+n);
//     return arr[n-2];
// }

// Better approach
int secondLargest(int arr[], int n)
{
    int largest=INT_MIN;
    int sLargest=INT_MIN;
    int slargeIndex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>sLargest && arr[i]!=largest){
            sLargest=arr[i];
        }
    
    }
   
    return  sLargest;
}
int main()
{
    int arr[] = {5, 4, 13,8, 6, 7, 12, 15,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sLargest = secondLargest(arr, n);
    cout << "second largest element is : " << sLargest << endl;
}