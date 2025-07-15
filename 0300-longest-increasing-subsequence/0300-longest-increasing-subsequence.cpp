class Solution {
public:
// int solveRec(vector<int>&nums,int curr,int prev)
// {
//     if(curr>=nums.size())
//     {
//         return 0;
//     }
//     int inc=0;
//     if(prev==-1 || nums[prev]<nums[curr])
//     {
//         inc=1+solveRec(nums,curr+1,curr);
//     }
//     int exc=0+solveRec(nums,curr+1,prev);
//     int final=max(inc,exc);
//     return final;
// }

//2d

int solveMem(vector<int>&nums,int curr,int prev,vector<vector<int>>&dp)
{
    if(curr>=nums.size())
    {
        return 0;
    }
    if(dp[curr][prev+1]!=-1)
    {
        return dp[curr][prev+1];
    }
    int inc=0;
    if(prev==-1 || nums[prev]<nums[curr])
    {
        inc=1+solveMem(nums,curr+1,curr,dp);
    }
    int exc=0+solveMem(nums,curr+1,prev,dp);
    dp[curr][prev+1]=max(inc,exc);
    return dp[curr][prev+1];
}
    int lengthOfLIS(vector<int>& nums) {
        int curr=0;
        int prev=-1;
        int n=nums.size();
        // return solveRec(nums,curr,prev); 
        //observation prev alawat back at curr  
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solveMem(nums,curr,prev,dp);
    }
};