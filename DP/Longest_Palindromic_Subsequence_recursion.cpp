    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.size() + 1, vector<int>(s.size() + 1, 0));
        for(int i = 1; i < s.size() + 1; i++) dp[i][i] = 1;
        for(int j = 2; j < s.size() + 1; j++){
            for(int i = 1, c = j; i < s.size() - j + 2; i++, c++){
                if(s[i - 1] == s[c - 1]) dp[i][c] = 2 + dp[i + 1][c - 1];
                else dp[i][c] = max(dp[i + 1][c], dp[i][c - 1]);
            }
        }
        return dp[1][s.size()];
    }