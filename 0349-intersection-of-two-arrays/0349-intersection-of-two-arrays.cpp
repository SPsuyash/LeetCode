class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     set<int>s;
     set<int>p;
     for(int num:nums1)
     {
        s.insert(num);
     }   
     for(int num:nums2)
     {
        p.insert(num);
     }
     unordered_map<int,int>mp;
     vector<int>ans;
     for(int num:s)
     {
        mp[num]++;
     }
     for(int num:p)
     {
        mp[num]++;
     }
     for(auto& pair:mp)
     {
        if(pair.second==2)
        {
            ans.push_back(pair.first);
        }
     }
     return ans;
    }
};