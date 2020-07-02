    vector<vector<string>> ans;
    bool ck(vector<string>& s, int r, int c){
        for(int i = 0; i < s.size(); i++) if(s[i][c] == 'Q') return false;
        for(int i = r, j = c; i >= 0 && j >= 0; i--, j--) if(s[i][j] == 'Q') return false;
        for(int i = r, j = c; i >= 0 && j < s.size(); i--, j++) if(s[i][j] == 'Q') return false;
        return true;
    }
    void fnc(vector<string>& s, int r){
        if(r == s.size()){
            ans.push_back(s);
            return;
        }
        for(int i = 0; i < s.size(); i++){
            if(ck(s, r, i)){
                s[r][i] = 'Q';
                fnc(s, r + 1);
                s[r][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> N;
        for(int i = 0; i < n; i++){
            string s = "";
            for(int j = 0; j < n; j++) s += '.';
            N.push_back(s);
        }
        fnc(N, 0);
        return ans;
    }
