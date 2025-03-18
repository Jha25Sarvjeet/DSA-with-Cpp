#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int pivotElement(int arr[], int s, int e)
{
    int pivElement = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivElement)
        {
            count++;
        }
    }
    int pivtIndex = s + count;
    swap(arr[s], arr[pivtIndex]);
    int i = s;
    int j = e;
    while (i < pivtIndex && j > pivtIndex)
    {
        while (arr[i] < pivElement)
        {
            i++;
        }
        while (arr[j] > pivElement)
        {
            j--;
        }
        if (i < pivtIndex && j > pivtIndex)
        {
            swap(arr[i++], arr[j--]);
        
        }
    }

    return pivtIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    else
    {
        int pivot = pivotElement(arr, s, e);
        quickSort(arr, s, pivot - 1);
        quickSort(arr, pivot + 1, e);
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
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}