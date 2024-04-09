/*Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. 
Find the number(between 1 to N), that is not present in the given array.*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//brute force approach
// int missingNumber(int arr[],int n){
//     for(int i=0;i<=n;i++){
//         int flag=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==i)
//                 flag=1;
// break;
//         }
//         if(flag==0)
//             return i;
//             break;
//     }

// }
//better approach


// int missingNumber(int arr[],int n){
//     int hash[n+1]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<=n;i++){
//         if(hash[i]==0)
//             return i;
//     }

// }
//optimal solution 1
// int missingNumber(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     for(int i=0;i<=n;i++){
//         ans=ans^i;
//     }
//     return ans;
// }
//optimal solution 2
int missingNumber(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int sum2=n*(n+1)/2;
    return sum2-sum;
}
int main(){
    int arr[]={2,1,3,6,0,8,5,7}    ;                   
    cout<<missingNumber(arr,8);
     return 0;
}