// Print sum of all subsets in increasing order
#include <bits/stdc++.h>
using namespace std;

void func(int ind, int sum, vector<int> &arr, int n, vector<int> &subSet)
{
    if(ind==n)
    {
        subSet.push_back(sum);
        return;
    }

    // Pick an element
    func(ind+1, sum+arr[ind], arr, n, subSet);
    // Dont pick
    func(ind+1, sum, arr, n, subSet);
}

vector<int> subSetSums(vector<int> arr, int n)
{
    vector<int> subSet;
    func(0, 0, arr, n, subSet);
    sort(subSet.begin(), subSet.end());
    for(int it: subSet) cout<<it<<" ";
    cout<<"\n";
    return subSet;
}

int main()
{
    vector<int> arr = {3,1,2};
    int n = 3;
    subSetSums(arr, n);
    return 0;
}
