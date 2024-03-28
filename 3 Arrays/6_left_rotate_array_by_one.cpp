#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    int arr[]={2,1,5,6,9};
    cout<<"before rotation"<<endl;
    print(arr,5);
    leftRotateByOne(arr,5);
    cout<<"after rotation"<<endl;
    print(arr,5);

    return 0;
}