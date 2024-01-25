class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        int l=1;
        int h=0;
        while(l<n)
        {
            if(nums[l]<=nums[l-1])
            {
                h++;
                if(h>1)
                {
                    return false;
                }
            }
            if(l>1 && nums[l]<=nums[l-2])
            {
                nums[l]=nums[l-1];
            }
            l++;
        }
       return true;
    }
};