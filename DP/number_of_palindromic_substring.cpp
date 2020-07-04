    int countSubstrings(string s) {
        if(s.size() < 2) return s.size();
        int ans = 0;
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), false));
        for(int i = 0; i < s.size(); i++){
            dp[i][i] = true;
            ans++;
        }
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == s[i + 1]){
                ans++;
                dp[i][i + 1] = true;
            }
        }
        for(int l = 2; l < s.size(); l++){
            for(int i = 0, j = l; i < s.size() - l + 1; i++, j++){
                if(s[i] == s[j] && dp[i + 1][j - 1] == true){
                    ans++;
                    dp[i][j] = true;
                }
            }
        }
        return ans;
    }
