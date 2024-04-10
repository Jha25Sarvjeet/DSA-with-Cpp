/*Count Maximum Consecutive One's*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int findMaxiConsecutiveOne(int arr[],int n){
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count ++;
        }
        else{
            count=0;
        }
        maxi=max(count,maxi);
    }
    return maxi;
}
int main(){
    int arr[]={ 1, 1, 0, 1, 1, 1 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum consecutive one's Are :- "<<findMaxiConsecutiveOne(arr,n);
    
    
     return 0;
}