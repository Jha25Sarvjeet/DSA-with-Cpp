#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//brutre force

int secondLargest(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-2];
}
int main(){
    int arr[]={5,4,8,6,7,12,15,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sLargest=secondLargest(arr,n);
    cout<<"second largest element is : "<<sLargest<<endl;
}