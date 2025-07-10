class Solution {
public:
int solveMem(vector<int>& nums,int i,vector<int>& dp){
    if(i>=nums.size())
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int include=nums[i]+solveMem(nums,i+2,dp);
    int exclude=0+solveMem(nums,i+1,dp);
    dp[i]=max(include,exclude);
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int i=0;
       return solveMem(nums,i,dp);
    }
};