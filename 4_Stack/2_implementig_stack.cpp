#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
class stack
{
    int *arr;
    int top;
    int size;

public:
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int val)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = val;
        }
        else
            cout << "stack overflow" << endl;
    }
    void pop()
    {
        if (top >= 0 && top < size)
        {
            cout << "poped element :-" << arr[top] << endl;
            top--;
        }
        else
        {
            cout << "stack under flow" << endl;
        }
    }
    void peek()
    {
        if (top >= 0)
        {
            cout << "top elment is " << arr[top] << endl;
        }
        else
        {
            cout << "empty stack" << endl;
        }
    }
    void is_empty()
    {
        if (top == -1)
        {
            cout << "stack is empty " << endl;
        }
        else
        {
            cout << "stack is not empty " << endl;
        }
    }
    void len()
    {
        cout << "size  " << top + 1<<endl;
    }
};
int main()
{
    stack st1(5);
    st1.len();
    // pushung element
    st1.push(5);
    // checking top element
    st1.peek();
    st1.push(10);
    cout << "pushing 10" << endl;
    st1.peek();
    // checking empty\;<< endl;

    return 0;
}