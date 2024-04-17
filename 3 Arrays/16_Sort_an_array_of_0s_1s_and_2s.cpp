/*Sort an array of 0's 1's and 2's*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sortAnArrayOf0_1_2(int arr[], int n)
{
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else
            c2++;
    }
   
    for (int i = 0; i < c0; i++)
    {
        arr[i] = 0;
    }
    for (int i = c0; i < c0+c1; i++)
    {
        arr[i] = 1;
    }
    for (int i = c0+c1; i < n; i++)
    {
        arr[i] = 2;
    }
}
int main()
{
    int arr[]={1,1,1,1,0,1,0,2,0,2,0,2,1};
    cout<<"before sorting"<<endl;
    for(int i=0;i<13;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"after sorting"<<endl;
    sortAnArrayOf0_1_2(arr,13);
    for(int i=0;i<13;i++){
        cout<<arr[i]<<" ";
    }
    
}