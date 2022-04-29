// Print all subsequences whose sum is k
#include <bits/stdc++.h>
using namespace std;

void Sub(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:ds) cout<<it<<" ";
            cout<<"\n"; 
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    Sub(ind+1, ds, s, sum, arr, n);

    s-=arr[ind];
    ds.pop_back();
    Sub(ind+1, ds, s, sum, arr, n);
}

int main()
{
    int arr[] = {1,2,1};
    int sum = 2;
    vector<int> ds;
    int n = 3;

    Sub(0, ds, 0, sum, arr, n);

    return 0;
}
