#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    int i=1;
    while(i<n){
        int j=i;
        while(arr[j]<=arr[j-1] && j>0){
            swap(arr[j],arr[j-1]);
            j--;
        }
        i++;
    }
}
int main(){
    int arr[] = {4, 3, 5, 1, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}