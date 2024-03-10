class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> tt(nums1.begin(), nums1.end());
        unordered_set<int> ss(nums2.begin(), nums2.end());
        for(int i:tt)
            if(ss.count(i))
                ans.push_back(i);
        return ans;
    }
};