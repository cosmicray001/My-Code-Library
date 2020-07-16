    int fnc(vector<int>& n, int key){
        int lo = 0, hi = n.size() - 1, mid, ans = n.size() - 1;
        while(lo <= hi){
            mid = lo + (hi - lo) / 2;
            if(n[mid] >= key){
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        vector<int> st;
        st.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > st[st.size() - 1]) st.push_back(nums[i]);
            else if(nums[i] < st[0]) st[0] = nums[i];
            else{
                int idx = fnc(st, nums[i]);
                st[idx] = nums[i];
            }
        }
        return st.size();
    }
