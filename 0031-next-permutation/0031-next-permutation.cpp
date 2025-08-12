class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int in;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                in=i;
                break;
            }
        }
        if(in==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>=in;i--)
        {
            if(nums[i]>nums[in])
            {
                swap(nums[i],nums[in]);
                break;
            }
        }
        reverse(nums.begin()+in+1,nums.end());
        
    }
};