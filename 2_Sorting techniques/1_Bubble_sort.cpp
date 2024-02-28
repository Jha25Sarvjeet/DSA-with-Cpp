/*Bubble sort*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(vector<int>& arr, int n) 
{
    
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
    }
}
int main(){
vector<int> arr={2,9,0,-8,-6,8,4,3};
bubbleSort(arr,arr.size());
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" "; 
}
    
     return 0;
}