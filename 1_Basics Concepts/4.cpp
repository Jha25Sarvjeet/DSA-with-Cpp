/*Check whether a given number ’n’ is a palindrome number.*/
#include <iostream>
using namespace std;
bool palindrome(int n)
{
    // Write your code here
    int rev = 0;
    int t = n;
    while (t)
    {

        rev = rev * 10 + (t % 10);
        t = t / 10;
    }
    if (rev == n)
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
    int n;
    cout << "enter number" << endl;
    cin >> n;
    bool ans;
    ans = palindrome(n);
    if(ans)
        cout<<"number is pallindrom"<<endl;
    else{
        cout<<"number is not pallindrom";

    }
    return 0;
}