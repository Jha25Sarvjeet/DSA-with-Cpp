#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// vector<int> generateFibonacciNumbers(int n)
// {
   
//     vector<int> vec;

//     int size = n;

//     // Base cases

//     if (n == 0)
//     {

//         vec.push_back(0);

//         return vec;
//     }

//     else if (n == 1)
//     {

//         vec.push_back(0);

//         return vec;
//     }

//     else if (n == 2)
//     {

//         vec.push_back(0);

//         vec.push_back(1);

//         return vec;
//     }

//     else if (vec.size() <= size)
//     {

//         vec = generateFibonacciNumbers(n - 1);

//         vec.push_back(vec[vec.size() - 1] + vec[vec.size() - 2]);

//         return vec;
//     }
// }

int  fibSeries(int n,int a,int b){
    cout<<a<< " ";
    if(n==0){
        return  0;
    }
    if(n==1)
        return 1;
    else{
        fibSeries(n-1,b,a+b);
    }
}
int main()
{
    int a;
    cout << "enter no";
    cin >> a;
    // for (auto i : generateFibonacciNumbers(a))
    //     cout << i << " ";
    fibSeries(a,0,1);
        return 0;
}