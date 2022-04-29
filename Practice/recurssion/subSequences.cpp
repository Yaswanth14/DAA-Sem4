// Print all the subsequences of a given array

#include <bits/stdc++.h>
using namespace std;

void Sub(int ind, vector<int> &ds, int arr[], int n)
{
    if(ind==n){
        if(ds.size()==0) cout<<"{}\n";
        for(auto it:ds) cout<<it<<" ";
        cout<<"\n";
        return;
    }

    // pick particular element
    ds.push_back(arr[ind]);
    Sub(ind+1, ds, arr, n);
    
    ds.pop_back();
    // not pick the element
    Sub(ind+1, ds, arr, n);
}

int main()
{
    int arr[] = {5,1,4,10};
    int n=4;
    vector<int> ds;

    Sub(0, ds, arr, n);

    return 0;
}

