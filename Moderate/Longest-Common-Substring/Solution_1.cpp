int f(string &s, string &t)
{
	//Write your code here
	int m = s.size();
	int n = t.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

	for(int j = 0; j <= n; j++) {
		dp[0][j] = 0;
	}
