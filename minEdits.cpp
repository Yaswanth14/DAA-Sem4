// Given two strings, find the minimum number of edits required to convert one string to
// another. add-delete-update

#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, string s1, string s2, vector<vector<int>> &dp)
{
    if(i<0) return j+1;
    if(j<0) return i+1;

    if(dp[i][j] != -1) return dp[i][j];

    if(s1[i]==s2[j]) return dp[i][j] = f(i-1, j-1, s1, s2, dp);

    return dp[i][j] = 1+min(f(i-1, j, s1, s2, dp), min(f(i, j-1, s1, s2, dp), f(i-1, j-1, s1, s2, dp)));
}

int editDistance(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n, vector<int>(m,-1));

    return f(n-1, m-1, str1, str2, dp);
}

int main()
{
    string str1, str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;

    int ans = editDistance(str1, str2);

    cout<<"Minimum number of operations to convert = "<<ans<<"\n";

    return 0;

}