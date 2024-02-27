/*Given an array 'arr' of size 'n'.
Return an array with all the elements placed in reverse order.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int j, vector<int> &v)
{
    if (i > j)
        return;
    else
    {
        swap(v[i], v[j]);
        reverse(i + 1, j - 1, v);
    }
}
vector<int> reverseArray(int n, vector<int> &nums)
{

    int i = 0;
    int j = n - 1;
    reverse(i, j, nums);

    return nums;
}

int main()
{
    int n;
    cout << "enter no of element in array" << endl;
    cin >> n;
    vector<int> v(n);
    cout << "enter element in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverseArray(n,v);
    cout << "vector after reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" " ;
    }

    return 0;
}