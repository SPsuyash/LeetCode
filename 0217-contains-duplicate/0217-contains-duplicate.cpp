class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums)
        {
            mp[num]++;
        }
        for(auto& nu:mp)
        {
            if(nu.second>1)
            {
                return true;
            }
        }
        return false;
    }
};