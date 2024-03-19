#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// using iteration

// void selectionSort(vector<int>&arr) {

//     for(int i=0;i<(arr.size())-1;i++){
//         int mini=i;
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[j]<arr[mini]){
//                 mini =j;
//             }
//         }
//             swap(arr[i],arr[mini]);
//     }

// }

// using recursion
void selectionSort(vector<int> &arr, int i, int n)
{
    if (i == n)
    {
        return;
    }
    int mini = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[mini])
        {
            mini = j;
        }
    }
    swap(arr[i], arr[mini]);
    selectionSort(arr, i + 1, n);
}

int main()
{
    vector<int> arr = {4, 5, 1, 3, 9, 7, 0, -9};
    cout<<"array before sorting"<<endl;
    for (auto i : arr)
        cout << i << " ";
    cout<<endl;
    // selectionSort(arr);//iterative function call
    selectionSort(arr,0,arr.size());
    cout<<"array after sorting"<<endl;
    for (auto i : arr)
        cout << i << " ";
    cout<<endl;
    

    return 0;
}