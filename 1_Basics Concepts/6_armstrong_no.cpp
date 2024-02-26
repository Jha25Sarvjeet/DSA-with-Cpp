#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    // Write your code here
    int temp = n;
    int l = 0;
    int ans = 0;

    // method 1 to count digit***************************
    // while(temp){
    // 		l++;
    // 		temp=temp/10;
    // }

    // to count no of didgit

    // 2nd way to count no of digit************************

    // l=floor(log10(n)+1);  // to get length of number*********************************

    // 3rd way to count no of digit*****************************

    string num = to_string(temp);
    l = num.size();

    temp = n;
    while (temp)
    {
        ans += pow(temp % 10, l);
        temp = temp / 10;
    }
    if (ans == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    bool ans= checkArmstrong(a);
    if(ans)
        cout<<"armstrong no";
    else    
        cout<<"not armstrong"<<endl;

    return 0;
}
