#include <bits/stdc++.h>
#define le 1003
using namespace std;
int dp[le][le];
int fnc(string s){
    for(int i = 1; i < s.size() + 1; i++){
        for(int j = 1; j < s.size() + 1; j++){
            if(s[i - 1] == s[j - 1] && i != j) dp[i][j] = 1 + dp[i - 1][j - 1];
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[s.size()][s.size()];
}
int main(){
    int t, len;
    string s;
    for(scanf("%d", &t); t--; ){
        cin >> len >> s;
        for(int i = 0; i < le; i++) for(int j = 0; j < le; dp[i][j] = 0, j++);
        cout << fnc(s) << endl;
    }
    return 0;
}
