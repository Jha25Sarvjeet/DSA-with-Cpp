#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// //Brute force approach

// void leftRotateBy_k_pace(vector<int>&arr,int k){

//     int n=arr.size();
//      k=k%n;
//     vector<int>temp;
//     for(int i=0;i<k;i++){
//         temp.push_back(arr[i]);
//     }
//     int j=0;
//     for(int i=k;i<n;i++){
//         arr[j++]=arr[i];
//     }
//     j=0;
//     for(int i=n-k;i<n;i++){
//         arr[i]=temp[j++];
//     }

// }

// another brute force approach
// void leftRotateBy_k_pace(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     vector<int> temp(n);
//     for (int i = 0; i < n; i++)
//     {
//         temp[(n + i - k) % n] = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }
// }

// optimal approach
void rotate(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }
}
void leftRotateBy_k_place(vector<int> &arr, int k)
{
    int n = arr.size();
    // rotating first k element
    rotate(arr, 0, k - 1);
    // rotating last n-k element
    rotate(arr, k, n - 1);
    // roatating entire array
    rotate(arr, 0, n - 1);
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
    leftRotateBy_k_place(temp, 2);
    print(temp, temp.size());
}
