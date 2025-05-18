class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int ans=-1;
        for(int num:nums)
        {
            int max1=-1;
            int d=num;
            while(d)
            {
                max1=max(max1,d%10);
                d=d/10;
            }
            mp[num]=max1;
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(mp[nums[i]]==mp[nums[j]])
                {
                    ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
        
    }
};