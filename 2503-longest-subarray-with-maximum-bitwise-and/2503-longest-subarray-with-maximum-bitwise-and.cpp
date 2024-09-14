
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int c=0;
        int ans=1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi) 
            {
                c++;
            }
            else 
            {
                c=0;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};