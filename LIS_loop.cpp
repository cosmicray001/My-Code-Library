    int lengthOfLIS(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        if(nums.size() == 0) return 0;
        vector<int> st(nums.size());
        st[0] = 1;
        int ans = 1;
        for(int i = 1; i < nums.size(); i++){
            st[i] = 1;
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]) st[i] = max(st[i], 1 + st[j]);
            }
            ans = max(ans, st[i]);
        }
        return ans;
    }
