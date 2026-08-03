int lcs(string s, string t)
{
	//Write your code here
	int m = s.size();
	int n = t.size();
	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
	for(int j = 0; j <= n; j++) {
		dp[0][j] = 0;
	}

	for(int i = 0; i <= m; i++) {
		dp[i][0] = 0;
	}

	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			if(s[i - 1] == t[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			} else {
				dp[i][j] = max((dp[i - 1][j]), (dp[i][j - 1]));
			}
		}
	}

	return dp[m][n];
}
int longestPalindromeSubsequence(string s)
{
    // Write your code here.
    string rev = s;
    int n = s.size();
    reverse(rev.begin(), rev.end());
    return lcs(s, rev);
}
int minimumInsertions(string &str)
{
	return str.size() - longestPalindromeSubsequence(str);
	// Write your code here.
}
