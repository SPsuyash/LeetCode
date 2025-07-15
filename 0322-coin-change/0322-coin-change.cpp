class Solution {
public:
// int solve(vector<int>&coins,int amount)
// {
//     if(amount==0)
//     {
//         return 0;
//     }
//     int mini=INT_MAX;
//     for(int i=0;i<coins.size();i++)
//     {
//         int coin=coins[i];
//         if(coin<=amount)
//         {
//             int recursive=solve(coins,amount-coin);
//             if(recursive!=INT_MAX){
//                 int coinsUsed=1+recursive;
//                 mini=min(mini,coinsUsed);
//             }
//         }
//     }
//     return mini;
// } 
int solveMem(vector<int>&coins,int amount,vector<int>&dp)
{
    if(amount==0)
    {
        return 0;
    }
    if(dp[amount]!=-1)
    {
        return dp[amount];
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++)
    {
        int coin=coins[i];
        if(coin<=amount)
        {
            int recursive=solveMem(coins,amount-coin,dp);
            if(recursive!=INT_MAX){
                int coinsUsed=1+recursive;
                mini=min(mini,coinsUsed);
            }
        }
    }
    dp[amount]=mini;
    return dp[amount];
} 
    int coinChange(vector<int>& coins, int amount) {
        // int ans=solve(coins,amount);
        // if(ans==INT_MAX)
        // {
        //     return -1;
        // }
        // return ans;
        vector<int>dp(amount+1,-1);
        int ans=solveMem(coins,amount,dp);
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};