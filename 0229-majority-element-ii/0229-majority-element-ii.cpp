class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int n3=n/3;
        vector<int>arr;
        unordered_map<int,int>mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
        for(auto num:mp)
        {
            if(num.second>n3)
            {
                arr.push_back(num.first);
            }
        }
        return arr;
    }
};