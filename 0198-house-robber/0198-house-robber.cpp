class Solution {
public:
//bottom up approach
int solveTab(vector<int>& nums,int n)
{
    vector<int> dp(n+2,0);
    dp[nums.size()]=0;

    for(int i=n-1;i>=0;i--)
    {
        int include=nums[i]+dp[i+2];
        int exclude=0+dp[i+1];
        dp[i]=max(include,exclude);
    }
    return dp[0];
}
//top down approach
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
    //     vector<int>dp(n+1,-1);
    //     int i=0;
    //    return solveMem(nums,i,dp);
    return solveTab(nums,n);
    }
};