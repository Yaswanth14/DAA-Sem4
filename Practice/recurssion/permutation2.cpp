// Same problem approach with less space
#include <bits/stdc++.h>
using namespace std;

void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    if(index==nums.size())
    {
        ans.push_back(nums);
        for(auto it: nums) cout<<it<<" ";
        cout<<"\n";
        return;
    }

    for(int i=index; i<nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        recurPermute(index+1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> Permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    recurPermute(0, nums, ans);

    return ans;
}

int main()
{
    vector<int> nums = {1,2,3};
    Permute(nums);

    return 0;
}
