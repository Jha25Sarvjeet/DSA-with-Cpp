#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n)
{
    // Write your code here.
    vector<int> vec;

    int size = n;

    // Base cases

    if (n == 0)
    {

        vector<int> vec;

        vec.push_back(0);

        return vec;
    }

    if (n == 1)
    {

        vec.push_back(0);

        return vec;
    }

    if (n == 2)
    {

        vec.push_back(0);

        vec.push_back(1);

        return vec;
    }

    if (vec.size() <= size)
    {

        vec = generateFibonacciNumbers(n - 1);

        vec.push_back(vec[vec.size() - 1] + vec[vec.size() - 2]);

        return vec;
    }
}
int main()
{
    int a;
    c

    return 0;
}