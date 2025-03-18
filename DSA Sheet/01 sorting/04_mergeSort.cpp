#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e)
{
    int i = s;
    int j = mid + 1;
    int temp[e - s + 1];
    int k = 0;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {

            temp[k++] = arr[j++];
        }
    }
    // for remainig elemenyt of both subarray'
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }
    i = s;
    for (int j = 0; j < (e - s + 1); j++)
    {
        {
            arr[i++] = temp[j];
        }
    }
}
void mergeSort(int arr[], int s, int e)
{
    if (s == e)
    {
        return;
    }
    else
    {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
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
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}