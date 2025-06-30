class Solution {
public:
    int findLHS(vector<int>& nums) {
        int longest=0;
     unordered_map<int,int>mp;
     for(int num:nums)
     {
        mp[num]++;
     }   
     for (auto& [key, val] : mp) {
        if (mp.count(key + 1)) {
            longest = max(longest, val + mp[key + 1]);
        }
    }
    return longest;

    }
};