#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Brute force approach
// void moveZeroToEnd(int arr[],int n){
//     int temp[n];
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp[j++]=arr[i];
//         }
//     }
//     for(int i=0;i<j;i++){
//         arr[i]=temp[i];

//     }
//     while(j<n){
//         arr[j++]=0;
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// optimal approach
// void moveZeroToEnd(int arr[], int n)
// {
//     int j = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }
//     for(int i=j+1;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }

// }
//clean code
void moveZeroToEnd(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            j++;
            swap(arr[i],arr[j]);

        }
    }
    // for(int i=j+1;i<n;i++){
    //     if(arr[i]!=0){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }

}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {0,0,0,0,1};
    print(arr, 5);
    moveZeroToEnd(arr, 5);
    print(arr, 5);

    return 0;
}
