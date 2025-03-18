#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    int j=0;
    int mini=0;
    while(j<n-1){
      
        for(int i=j;i<n;i++){
            if(arr[i]<arr[mini]){
                mini=i;
            }
        }
        swap(arr[j++],arr[mini]);
        mini=j;
    }
   
}
int main(){
    int arr[]={4,3,5,1,2,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}