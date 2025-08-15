class Solution {
public:
void maxProfitfinder(vector<int>&prices,int i,int& mini,int& maxi){
    if(i == prices.size()){
        return;
    }
    if(prices[i]<mini) mini=prices[i];
    int curr=prices[i]-mini;
    if(curr>maxi) maxi=curr;

    maxProfitfinder(prices,i+1,mini,maxi);
}
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        maxProfitfinder(prices,0,mini,maxi);
        return maxi;
    }
};