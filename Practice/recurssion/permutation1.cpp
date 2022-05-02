#include <bits/stdc++.h>
using namespace std;

// Given array of distinct integers, return all possible permutations

void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
    if(ds.size() == nums.size())
    {
        ans.push_back(ds);
        for(auto it: ds) cout<<it<<" ";
        cout<<"\n";
        return;
    }
    for(int i=0;i<nums.size(); i++)
    {
        if(!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            recurPermute(ds, nums, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> Permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()];

    for(int i=0; i<nums.size(); i++) freq[i] = 0;

    recurPermute(ds, nums, ans, freq);
    return ans;
}

int main()
{
    vector<int> nums = {1,2,3};
    Permute(nums);

    return 0;
}

