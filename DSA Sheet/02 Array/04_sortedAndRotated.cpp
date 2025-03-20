#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            count++;
        }
    }
    if (count < 2)
        return true;
    else
        return false;
}
int main()
{
    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool sortOrNot = checkSorted(arr, n);
    if (sortOrNot)
        cout << "sorted and rotated" << endl;
    else
        cout << " NOt sorted" << endl;
}