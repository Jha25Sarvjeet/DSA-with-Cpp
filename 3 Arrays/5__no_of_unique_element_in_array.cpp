#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// brute force approach
// int removeDuplicates(vector<int> &arr, int n) // to count no of unique element
// {
//     set<int> s;

//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }


//     return s.size();
// }
//optimal approach
int removeDuplicates(vector<int> &arr, int n)// to arrange unique element in order till ith index(i+1) is size of array 
{
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
// int removeDuplicates(vector<int> &arr, int n)// to count no of unique element
// {
//     int l = 1;

//     for (int i = 0; i < n - 1; i++)
//     {

//         if (arr[i] != arr[i + 1])
//             l++;
//     }

//     return l;
// }

int main()
{
    vector<int> v = {1, 2, 2, 2, 3};
    int ans = removeDuplicates(v, 5);
    cout << "no of unique element in array " << ans;

    return 0;
}