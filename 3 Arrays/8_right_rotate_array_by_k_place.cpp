#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//brute force approach
// void rigtRotateBy_k_pace(vector<int>&arr,int k){

//     int n=arr.size();
//      k=k%n;
//     vector<int>temp;
//     for(int i=n-k;i<n;i++){
//         temp.push_back(arr[i]);
//     }
   
//     for (int i = n - k - 1; i >= 0; i--)
//   {
//     arr[i + k] = arr[i];
//   }
//     int j=0;
//     for(int i=0;i<k;i++){
//         arr[i]=temp[j++];
//     }

// }

//second approach
// void rigtRotateBy_k_pace(vector<int>&arr,int k){

//     int n=arr.size();
//     k=k%n;
//     vector<int>temp(n);
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//     }
// }

//optimal solution
void rotate(vector<int>&arr,int s,int e){
    if(s>=e)
        return;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}
void rigtRotateBy_k_pace(vector<int>&arr,int k){

    int n=arr.size();
    k=k%n;
    //rotating first n-k element
    rotate(arr,0,n-k-1);
    //rotating rght k element
    rotate(arr,n-k,n-1);
    //rotating  entire array
    rotate(arr,0,n-1);
}

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> temp = {2, 3, 6, 9, 4, 5, 7};
    print(temp, temp.size());
    rigtRotateBy_k_pace(temp, 16);
    print(temp, temp.size());
    return 0;
}