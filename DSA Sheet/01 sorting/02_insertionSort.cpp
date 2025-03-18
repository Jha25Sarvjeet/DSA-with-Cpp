#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// iterative approach

// void insertionSort(int arr[], int n){
//     int i=1;
//     while(i<n){
//         int j=i;
//         while(arr[j]<=arr[j-1] && j>0){
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//         i++;
//     }
// }
void insertionSort(int arr[], int i, int n)
{
    if(i==n)return;
    int j = i;
    while (arr[j] <= arr[j - 1] && j > 0)
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }
    insertionSort(arr,i+1,n);
}
int main()
{
    int arr[] = {4, 3, 5, 1, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, 1,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}