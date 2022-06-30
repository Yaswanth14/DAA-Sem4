#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(vector<int> &v1, vector<int> &v2, int n)
{
    int dp[n+1][n+1];
    for(int i=0; i<n; i++) dp[0][i] = 0;
    for(int i=0; i<n; i++) dp[i][0] = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(v1[i-1]==v2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[n][n];
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int i=n;
    cout<<"Enter elements: ";
    vector<int>v1, v2;
    while(i--)
    {
        int a;
        cin>>a;
        v1.push_back(a);
        v2.push_back(a);
    }

    sort(v2.begin(), v2.end());
    cout<<longestCommonSubsequence(v1,v2,n);
}

