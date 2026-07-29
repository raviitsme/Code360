#include<bits/stdc++.h>
using namespace std;
int f(int i, int j, string &s, string &t, vector<vector<int>> &dp) {
    if(i < 0 || j < 0) 
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
 
    if(s[i] == t[j]) {
        return dp[i][j] = 1 + f(i - 1, j - 1, s, t, dp);
    }
 
    return dp[i][j] = max(f(i - 1, j, s, t, dp), f(i, j - 1, s, t, dp));
}
 
int lcs(string s, string t)
{
    //Write your code here
    int m = s.size();
    int n = t.size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return f(m - 1, n - 1, s, t, dp);
}