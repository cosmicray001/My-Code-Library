class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        if(s.size() == 2){
            if(s[0] == s[1]) return s;
            else{
                string a = "";
                return a += s[0];
            }
        }
        int len = 0;
        string ans = "";
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        for(int i = 0; i < s.size(); i++) dp[i][i] = true;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == s[i + 1]){
                ans = s.substr(i, 2);
                dp[i][i + 1] = true;
            }
        }
        for(int l = 2; l < s.size(); l++){
            for(int i = 0, j = l; i < s.size() - l + 1; i++, j++){
                if(s[i] == s[j] && dp[i + 1][j - 1] == true){
                    int le = j - i + 1;
                    string sub = s.substr(i, le);
                    if(le > len){
                        len = le;
                        ans = sub;
                    }
                    dp[i][j] = true;
                }
            }
        }
        if(ans == "") return ans += s[0];
        return ans;
    }
};
