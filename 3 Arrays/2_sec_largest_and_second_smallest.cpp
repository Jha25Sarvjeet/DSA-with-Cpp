#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    //*********************Brute force approach*************************
    sort(a.begin(), a.end());
    return {a[n - 2], a[1]};
    //*******************Better aproach*******************************
    // int max=a[0];
    // int smax=INT_MIN;
    // int sm=a[0];
    // int ssm=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(a[i]>max){
    //         smax=max;
    //         max=a[i];
    //     }
    //     else if(a[i]>smax && a[i]!=max){
    //         smax=a[i];
    //     }}
    //  for(int i=0;i<n;i++){
    //     if(a[i]<sm){
    //         ssm=sm;
    //         sm=a[i];
    //     }
    //     else if(a[i]<ssm && a[i]!=sm){
    //         ssm=a[i];
    //     }}
    //     return {smax,ssm};

    //********************Optimal solution******************************
    // int max=a[0];
    // int smax=INT_MIN;
    // int sm=a[0];
    // int ssm=INT32_MAX;
    // for(int i=0;i<n;i++){
    //     if(a[i]>max){
    //         smax=max;
    //         max=a[i];
    //     }
    //     else if(a[i]>smax && a[i]!=max){
    //         smax=a[i];
    //     }
    //     if(a[i]<sm){
    //         ssm=sm;
    //         sm=a[i];
    //     }
    //     else if(a[i]<ssm && a[i]!=sm){
    //         ssm=a[i];
    //     }

    // }
    // return {smax,ssm};
}

int main()
{
    vector<int>v={2,8,9,4,3,1,9,87,6,32};
    vector<int>ans=getSecondOrderElements(v.size(),v);
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}