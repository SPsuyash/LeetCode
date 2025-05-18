class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
  
        for (int num : nums) {
            mp[num]++;
        }
        
        int sum = 0;
        for (auto& pair : mp) {
            if (pair.second == 1) {
                sum += pair.first;
            }
        }
        
        return sum;
    }
};
