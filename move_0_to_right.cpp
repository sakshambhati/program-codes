#include<iostream>

using namespace std;


void moveZeroes(vector<int>& nums) {
        int i = 0;  //non zero value
        for(int j = 0; j<nums.size(); j++)
        {
                if(nums[j] != 0)
                {
                    swap(nums[j], nums[i]);
                    i++;
                }
        }
    }
    
