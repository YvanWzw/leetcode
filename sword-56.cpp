    vector<int> singleNumbers(vector<int>& nums) {
        int x=0;
        vector<int> ans={0,0};
        for(auto num:nums)
            x^=num;
        int temp = x&(-x);
        for(auto num:nums)
            if((num&temp)==0)
                ans[0]^=num;
            else
                ans[1]^=num;
        return ans;
    }