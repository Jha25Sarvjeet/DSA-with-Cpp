#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr) {
   
    for(int i=0;i<(arr.size())-1;i++){
        int mini=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }
        }
            swap(arr[i],arr[mini]);
    }

}
int main()
{
   vector<int>arr={4,5,1,3,9,7,0,-9};
   selectionSort (arr);
   for(auto i:arr)
        cout<<i<<" ";

    return 0;
}