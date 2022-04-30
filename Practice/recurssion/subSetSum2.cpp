// Return all possible subsets without duplicates
#include <bits/stdc++.h>
using namespace std;

void findSubsets(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    for(auto it:ds) cout<<it<<" ";
    cout<<"\n";
    ans.push_back(ds);
    for(int i=ind; i<nums.size(); i++)
    {
        if(i!=ind && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        findSubsets(i+1, nums, ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetsAns(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int>ds;
    sort(nums.begin(), nums.end());
    findSubsets(0, nums, ds, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1,2,2,2,3,3};
    subsetsAns(nums);

    return 0;
}


