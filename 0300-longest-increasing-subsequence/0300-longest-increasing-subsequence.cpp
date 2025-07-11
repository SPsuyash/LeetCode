class Solution {
public:
    int solve(vector<int>& nums, int last, int i, vector<vector<int>>& dp) {
        if (i >= nums.size()) return 0;
        if (dp[last+1][i] != -1) 
       {
         return dp[last+1][i];
         }

        int inc = 0;
        if (last == -1 || nums[i] > nums[last]) {
            inc = 1 + solve(nums, i, i + 1, dp);
        }
        int exc = solve(nums, last, i + 1, dp);

        dp[last+1][i] = max(inc, exc);
        return dp[last+1][i];
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 2, -1));
        return solve(nums, -1, 0, dp);
    }
};
