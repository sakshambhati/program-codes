void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size());  // v me value dali jayegi toh size hona chaye phle se kuch
        
        for(int i = 0; i<nums.size(); i++)
        {
            v[(i+k) % nums.size()] = nums[i];  // n+2 % n = 2
        }
        
        nums = v;
    }


    or

    void rotate(vector<int>& nums, int k) {
        vector<int> ans = nums;
        int n = nums.size();
        k = n - k % n;
        
        for(int i = 0; i < n; i++)
            nums[i] = ans[(i + k) % n];
    }