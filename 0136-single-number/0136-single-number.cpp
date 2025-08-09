class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
    
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto num:mp)
        {
            if(num.second==1)
            {
                return num.first; 
            }
        }
        return -1;
    }
};