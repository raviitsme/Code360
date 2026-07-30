void lcs(string s, string t, vector<vector<int>> &dp)
{
    //Write your code here
    int m = s.size();
    int n = t.size();
    for(int j = 0; j <= n; j++) {
        dp[0][j] = 0;
    }
 
    for(int i = 0; i <= m; i++) {
        dp[i][0] = 0;
    }
 
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[i - 1] == t[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max((dp[i - 1][j]), (dp[i][j - 1]));
            }
        }
    }
}
string findLCS(int n, int m,string &s1, string &s2){
    // Write your code here.
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));