#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int isSorted(int n, vector<int> a) {
    // Write your code here.
    //***********************brute force *********************
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[j]<a[i])
                return false;
        }
    }
    return true;
    //***********************Better*******************
    // vector<int>temp=a;
    // sort(temp.begin(),temp.end());
    // for(int i=0;i<a.size();i++){
    //     if(a[i]!=temp[i])
    //         return 0;

    // }
    // return 1;
    //************************Optimal*********************
    // for(int i=1;i<a.size();i++){
    //     if(a[i]<a[i-1])
    //     return false;
            
    // }
    // return true;
}

int main(){
    vector<int>arr(4);
    cout<<"enter aelemntr in array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<isSorted(5,arr)?(cout<<"sorted"):(cout<<"not sorted");
    
     return 0;
}