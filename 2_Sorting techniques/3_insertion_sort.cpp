#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// iterative approach
// void insertionSort(vector<int> & arr,int n){
//        for(int i=0;i<n;i++){
//         int temp=i;
//         while(temp>0 && arr[temp]<arr[temp-1]){
//             swap(arr[temp],arr[temp-1]);
//             temp--;
//         }
//        }
// }
// recursion approach
void insertionSort(vector<int> &arr, int i, int n)
{
    if (i == n)//base case
        return;
    int temp = i;
    while (temp > 0 && arr[temp] < arr[temp - 1])
    {
        swap(arr[temp], arr[temp - 1]);
        temp--;
    }
    insertionSort(arr,i+1,n);//recursive call
}


int main()
{
    vector<int> arr = {4, 5, 1, 3, 9, 7, 0, -9};
    cout << "array before sorting" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
  
    // insertionSort(arr, arr.size());// iterative fuction call
    insertionSort(arr,0,arr.size());//recursice function call
    cout << "array after sorting" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
