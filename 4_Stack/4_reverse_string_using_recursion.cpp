#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//Reversing string using stack
string rev(string s,string ans){
    stack<char>st;
    int size=s.length();
    for(int i=0;i<size;i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}
int main(){
    string s="hello";
    string ans="";
   cout<<rev(s,ans)<<endl;
}