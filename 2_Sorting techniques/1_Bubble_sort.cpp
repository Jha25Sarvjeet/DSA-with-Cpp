/*Bubble sort*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// using iteratiion
//  void bubbleSort(vector<int>& arr, int n)
//  {

//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[j]<arr[i])
//                 swap(arr[i],arr[j]);
//         }
//     }
// }

void bubbleSort(vector<int>&arr, int n)
{
    if (n == 1)
        return;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] < arr[i])
                swap(arr[i], arr[i + 1]);
            
        }
        bubbleSort(arr,n-1);
    }
}
void print(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr = {2, 9, 0, -8, -6, 8, 4, 3};
    cout<<"array before sorting"<<endl;
    print(arr);
    // bubbleSort(arr, arr.size()); // function call for iterartice approach
    bubbleSort(arr,arr.size());
    cout<<"array after sorting"<<endl;
    print(arr);

    return 0;
}