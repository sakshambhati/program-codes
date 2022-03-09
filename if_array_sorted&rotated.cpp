 bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        
        for(int i = 1; i<n; i++)
        {
            if(nums[i-1] > nums[i])  // 1 pair 5 > 1 
                count++;
            if(count > 1)
            {
                break;
            }
        }
        if(nums[n-1] > nums[0])  // sorted but not rotated
            count++;
        
    return (count == 1 || count == 0);
    }