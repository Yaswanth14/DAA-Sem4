// fnd all unique combinations where candidate no.s sum up to target, each no. may only be used once in combination. Arrange in lexicographic

#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds)
{
    if(target==0)
    {
        for(int it: ds) cout<<it<<" ";
        cout<<"\n";
        ans.push_back(ds);
        return;
    }
    for(int i=ind; i<arr.size(); i++)
    {
        if(i>ind&&arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findCombination(i+1, target-arr[i], arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;

    findCombination(0, target, candidates, ans, ds);
}


int main()
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    combinationSum(candidates, target);
}

