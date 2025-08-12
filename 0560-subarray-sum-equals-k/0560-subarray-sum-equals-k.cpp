class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int c=0;
        for(auto num:nums)
        {
            sum+=num;
            if(mp.find(sum-k)!=mp.end()){
                c+=mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};