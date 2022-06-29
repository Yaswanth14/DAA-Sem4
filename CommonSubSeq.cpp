#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string str1, string str2, int m, int n)
{
    int dp[m+1][n+1];
    memset(dp, 0, sizeof(dp));

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(str1[i-1]==str2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}

int main()
{
    string str1, str2;
    cout<<"Enter string 1: ";
    cin>>str1;
    cout<<"Enter string 2: ";
    cin>>str2;

    cout<<longestCommonSubsequence(str1, str2, str1.length(), str2.length());
    return 0;
}