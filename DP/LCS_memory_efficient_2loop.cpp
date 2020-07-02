int longestCommonSubsequence(string text1, string text2) {
        int le = text2.size() + 2;
        int ans = 0;
        vector<int> prev(le, 0), cur(le, 0);
        for(int i = 1; i < text1.size() + 1; i++){
            for(int j = 1; j < text2.size() + 1; j++){
                if(text1[i - 1] == text2[j - 1]) cur[j] = 1 + prev[j - 1];
                else cur[j] = max(cur[j - 1], prev[j]);
            }
            for(int j = 0; j < text2.size() + 1; j++) prev[j] = cur[j];
        }
        return cur[text2.size()];
    }
