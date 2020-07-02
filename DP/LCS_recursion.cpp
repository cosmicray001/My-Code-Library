int fnc(int i, int j, string s, string t){
    if(i == s.size() || j == t.size()) return 0;
    if(dp[i][j] != 0) return dp[i][j];
    int ans = 0;
    if(s[i] == t[j]) ans = 1 + fnc(i + 1, j + 1, s, t);
    else ans = max(fnc(i + 1, j, s, t, ), fnc(i, j + 1, s, t));
    return dp[i][j] = ans;
}
