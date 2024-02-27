#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool pali(int i, int j, string &str)
{
    if (i > j)
    {
        return true;
    }
    else
    {
        if (str[i] != str[j])
            return false;
        else
        {
            pali(i + 1, j - 1, str);
        }
    }
}
bool isPalindrome(string &str)
{

    return (pali(0, str.size() - 1, str));
}

int main()
{
    string str;
    cout<<"enter string  ";
    cin>>str;
    bool ans=isPalindrome(str);
    if(ans)
        cout<<"pallindrom";
    else{
        cout<<"not pallindrom";
    }

    return 0;
}