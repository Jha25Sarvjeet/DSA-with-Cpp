#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
        int pivot=arr[s];
        int count=0;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivot){
                count++;
            }
        }
        int pivotPosition=s+count;
        swap(arr[s],arr[pivotPosition]);

        int i=s;
        int j=e;
        while(i<pivotPosition && j>pivotPosition){
            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            if(i<pivotPosition && j>pivotPosition){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        return pivotPosition;
}
void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)//base case
    {
        return;
    }
    else
    {
        int pivot = partition(arr, s, e);
        quickSort(arr, s, pivot - 1);//recursive call
        quickSort(arr, pivot + 1, e);//recursive call
    }
}
int main()
{
   vector<int> arr = {4, 5, 1, 3, 9, 7, 0, -9};
    cout << "array before sorting" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
  
    
    quickSort(arr,0,arr.size()-1);
    cout << "array after sorting" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}