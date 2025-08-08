class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(min>=prices[i])
            {
                min=prices[i];
            }
            if(max<=(prices[i]-min))
            {
                max=prices[i]-min;
            }
        }
        return max;
    }
};