int longestCommonSubsequence(string text1, string text2) {
        int le = text2.size() + 1, p;
        vector<int> st(le, 0);
        for(int i = 1; i < text1.size() + 1; i++){
            p = 0;
            for(int j = 1; j < text2.size() + 1; j++){
                int bu = st[j];
                if(text1[i - 1] == text2[j - 1]) st[j] = p + 1;
                else st[j] = max(st[j], st[j - 1]);
                p = bu;
            }
        }
        return st[text2.size()];
    }
