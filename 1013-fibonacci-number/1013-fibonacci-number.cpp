class Solution {
public:
// int fibn(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     else{
//         return fibn(n-2)+fibn(n-1);
//     }
// }
    int fib(int n) {
        // int sum=0;
        // sum=sum+fibn(n);
        // return sum;
        if(n==0) return 0;
        if(n==1) return 1; 
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};