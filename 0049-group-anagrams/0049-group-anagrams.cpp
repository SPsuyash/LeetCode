class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        // sorting
        int n = s.size();
        map<string, vector<string>> mp;
        for (auto i : s) {
            string ss = i;
            sort(ss.begin(), ss.end());
            mp[ss].push_back(i);
        }
        vector<vector<string>>ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {

            ans.push_back(it->second);
        }
        return ans;
    }
};