#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// iterative approach

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 1; j < n - i; j++)
//         {
//             if (arr[j] < arr[j - 1])
//             {
//                 swap(arr[j], arr[j - 1]);
//             }
//         }
//     }
// }

// recursive approach
void bubbleSort(int arr[], int n)
{
    if(n==1)return;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
        }
    }
    bubbleSort(arr,n-1);
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}