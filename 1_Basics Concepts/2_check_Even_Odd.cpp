#include <iostream>
using namespace std;
/*Program to check Even odd*/
int main()
{
    int num;
    cout << "enter number to check" << endl;
    cin >> num;
    // first approach
    if (num & 1)
    {
        cout << num << " is odd" << endl;
    }
    else
    {
        cout << num << " is even" << endl;
    }
    // second approach
    // if (num % 2 != 0)
    // {
    //     cout << num << " is odd" << endl;
    // }
    // else
    // {
    //     cout << num << " is even" << endl;
    // }

    return 0;
}