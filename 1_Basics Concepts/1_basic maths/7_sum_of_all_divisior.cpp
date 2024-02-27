/*You are given an integer ‘n’.
Sample Input 1:
3
Sample Output 1:
8
Explanation of sample output 1:
We need to find sumOfDivisors(1) + sumOfDivisors(2) +sumOfDivisors(3).
sumOfDivisors(1) = 1
sumOfDivisors(2) = 2 + 1 = 3
sumOfDivisors(3) = 3 + 1 = 4
Therefore, the answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) = 1 + 3 + 4 = 8.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n)
{

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                sum += j;
                if (j != (i / j))
                    sum += i / j;
            }
        }
    }
    return sum;
}
int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    cout << "sum of divisior of all no till " << a << " is " << sumOfAllDivisors(a);

    return 0;
}