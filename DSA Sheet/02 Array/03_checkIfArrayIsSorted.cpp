#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//brute force approach

// bool checkSorted(int arr[],int n){
//     int temp[n];
//     copy(arr,arr+n,temp);//copyin array to another 
//     sort(arr,arr+n);
//     for (int i=0;i<n;i++){
//         if(arr[i]!=temp[i]){
//             return false;
//         }
//     }
//     return true;
// }
//optimal approach

bool checkSorted(int arr[],int n){
    for (int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = { 4,8,  12,12,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool sortOrNot=checkSorted(arr,n);
    if(sortOrNot)cout<<"sorted"<<endl;
    else cout<<" NOt sorted"<<endl;
}