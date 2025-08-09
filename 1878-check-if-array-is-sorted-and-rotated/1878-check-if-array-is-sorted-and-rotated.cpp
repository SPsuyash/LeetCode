class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=1;i<=n-1;i++)
        {
            if(nums[i-1]>nums[i])
            {
                c++;
            }
        }
        if(nums[0]<nums[n-1])
        {
            c++;
        }
        
        return c<=1;

    }
};