int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt){
    // Write Your Code Here.
    vector<vector<int>> dp(n, vector<int>(w + 1, 0));
    for(int W = 0; W <= w; W++) {
        dp[0][W] = (W/wt[0]) * val[0];
    }
​
    for(int ind = 1; ind < n; ind++) {
        for(int W = 0; W <= w; W++) {
            int notTake = 0 + dp[ind - 1][W];
            int take = -1e9;
            if(wt[ind] <= W) {
                take = val[ind] + dp[ind][W - wt[ind]];
            } 
​
            dp[ind][W] = max(take, notTake);
        }
    }
​
    return dp[n - 1][w];
}