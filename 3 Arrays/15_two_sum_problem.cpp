/*Two Sum : Check if a pair with given sum exists in Array*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool twoSumProblem(int arr[], vector<int> &ans, int sum, int n)
{
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                flag = true;
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        break;
    }
    return flag;
}
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans;
    bool result=twoSumProblem(arr,ans,target,5);
    if(result){
        cout<<"YES"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
        ans.push_back(-1);
        ans.push_back(-1);
         for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}