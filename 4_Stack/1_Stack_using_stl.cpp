#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1;
    // checking stack size
        cout << "stack size " << st1.size() << endl;
        //pushung element
        st1.push(5);
        //checking top element 
        cout<<"top element "<<st1.top()<<endl;
        st1.push(10);
        cout<<"pushing 10"<<endl;
        cout<<"top "<<st1.top()<<endl;
        //checking empty
        cout<<st1.empty()<<endl;
        

    return 0;
}