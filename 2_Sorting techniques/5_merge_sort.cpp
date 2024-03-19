#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr, int s, int mid, int e)
{
    int l=e-s+1;
    int temp[l];
    int i=s;
    int j=mid+1;
    int c=0;
    while(i<=mid && j<=e){
        if(arr[i]>arr[j]){
            temp[c]=arr[j];
            j++;
            c++;
        }
        else{
            temp[c]=arr[i];
            i++;
            c++;
        }
    }
    while(i<=mid){
        temp[c]=arr[i];
        i++;
        c++;
    }
     while(j<=e){
        temp[c]=arr[j];
        j++;
        c++;
    }
    c=0;
    for(int i=s;i<=e;i++){
        arr[i]=temp[c];
        c++;
    }

}
void mergeSort(vector<int> &arr, int s, int e)
{
    if(s>=e)
        return;
    else{
        int mid=(s+e)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        merge(arr,s,mid,e);

    }
}
int main()
{
    vector<int> arr = {4, 5, 1, 3, 9, 7, 0, -9};
    cout << "array before sorting" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);
    cout << "array after sorting" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}