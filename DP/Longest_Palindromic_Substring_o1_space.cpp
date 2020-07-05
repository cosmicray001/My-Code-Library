class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        int lo, hi, len = 0, st = 0, ed = 0;
        string ans = "";
        for(int i = 1; i < s.size(); i++){
            lo = i - 1;
            hi = i;
            while(lo >= 0 && hi < s.size() && s[lo] == s[hi]){
                if(hi - lo + 1 > len){
                    st = lo;
                    ed = hi;
                    len = hi - lo + 1;
                }
                hi++;
                lo--;
            }
            lo = i - 1;
            hi = i + 1;
            while(lo >= 0 && hi < s.size() && s[lo] == s[hi]){
                if(hi - lo + 1 > len){
                    st = lo;
                    ed = hi;
                    len = hi - lo + 1;
                }
                hi++;
                lo--;
            }
        }
        for(int i = st; i < ed + 1; i++) ans += s[i];
        return ans;
    }
};
