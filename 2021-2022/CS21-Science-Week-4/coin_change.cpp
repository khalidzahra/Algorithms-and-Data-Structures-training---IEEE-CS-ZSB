long getWays(int n, vector<long> c) {
    vector<vector<int>> dp(c.size(), vector<int>(n + 1));
    dp[0][0] = 1;
    for (int i = 0; i < dp.size(); i++) {
        for (int j = 0; j < n + 1; j++) {
            if (i - 1 >= 0) dp[i][j] += dp[i - 1][j];
            if (j - c[i] >= 0) dp[i][j] += dp[i][j - c[i]];
        }
    }
    return dp[c.size() - 1][n];
}