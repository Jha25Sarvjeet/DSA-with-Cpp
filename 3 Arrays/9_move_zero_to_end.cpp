#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void moveZeroToEnd(int arr[],int n){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j++]=arr[i];
        }
    }
    for(int i=0;i<j;i++){
        arr[i]=temp[i];

    }
    while(j<n){
        arr[j++]=0;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,0,3,0,5,4,0,6,8,0,0,54,6,0};
    print(arr,14);
    moveZeroToEnd(arr,14);
    print(arr,14);

    
     return 0;
}
